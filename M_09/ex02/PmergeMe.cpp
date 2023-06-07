#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {
}

PmergeMe::~PmergeMe() {
}

PmergeMe::PmergeMe(const PmergeMe &ref) {
    *this = ref;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &ref) {
    this->_v = ref._v;
    return *this;
}

void    PmergeMe::run(int argc, char **argv) {
    try {
	    this->parse(argc, argv);

        clock_t startVec = clock();
        _tmp.resize(this->_v.size());
        this->sortVec(0, this->_v.size());
        clock_t endVec = clock();

        clock_t startDeq = clock();
        _tmpDeq.resize(this->_d.size());
        this->sortDeq(0, this->_d.size());
        clock_t endDeq = clock();

        double vecTime = (double)(endVec - startVec) / CLOCKS_PER_SEC * 1000000;
        double deqTime = (double)(endDeq - startDeq) / CLOCKS_PER_SEC * 1000000;
        this->print(vecTime, deqTime);

    } catch (std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
        exit(1);
    }
}

void	PmergeMe::parse(int argc, char **argv) {
    std::cout << "Before:\t";

    for (int i = 1; i < argc; i++) {
        char *cLine = argv[i];
	    std::string 	line(cLine);
        if (line.empty()) {
            std::cerr << "Error: Bad input => " << line << std::endl;
            exit(1);
        }
        for (size_t j = 0; j < line.length(); i++) {
            if (j == 0 && line[j] == '-') continue;
            if (!isdigit(line[j])) {
                std::cerr << "Error: Bad input => " << line << std::endl;
                exit(1);
            }
        }
        int num = std::stoi(line);
        this->_v.push_back(num);
        this->_d.push_back(num);
        std::cout << num << " ";
    }
}

void	PmergeMe::sortVec(size_t begin, size_t end) {
	if (end - begin < 2) {
		return;
	}
    size_t	mid = begin + (end - begin) / 2;
    this->sortVec(begin, mid);
	this->sortVec(mid, end);
	this->mergeVec(begin, mid, end);
	for (size_t i = begin; i < end; i++) this->_v[i] = this->_tmp[i];
}

void PmergeMe::mergeVec(size_t begin, size_t mid, size_t end) {
	size_t i = begin;
	size_t j = mid;

	for (size_t k = begin; k < end; k++) {
		if (i < mid && (j >= end || _v[i] <= _v[j])) {
			_tmp[k] = _v[i];
			i++;
		} else if (j < end) {
			_tmp[k] = _v[j];
			j++;
		}
	}
}

void	PmergeMe::sortDeq(size_t begin, size_t end) {
    if (end - begin < 2) {
        return;
    }
    size_t	mid = begin + (end - begin) / 2;
    this->sortVec(begin, mid);
    this->sortVec(mid, end);
    this->mergeVec(begin, mid, end);
    for (size_t i = begin; i < end; i++) this->_d[i] = this->_tmpDeq[i];
}

void PmergeMe::mergeDeq(size_t begin, size_t mid, size_t end) {
    size_t i = begin;
    size_t j = mid;

    for (size_t k = begin; k < end; k++) {
        if (i < mid && (j >= end || _d[i] <= _d[j])) {
            _tmpDeq[k] = _d[i];
            i++;
        } else if (j < end) {
            _tmpDeq[k] = _d[j];
            j++;
        }
    }
}

void    PmergeMe::print(double vecTime, double deqTime) {
    std::cout << "After:\t";
    for (size_t i = 0; i < this->_v.size(); i++) std::cout << this->_v[i] << " ";
    std::cout << std::endl;
    std::cout << "Time to process a range of" << _v.size() << " elements with std::vector : " << vecTime << " us" << std::endl; // 62.14389 us"
    std::cout << "Time to process a range of" << _d.size() << " elements with std::deque : " << deqTime << " us" << std::endl; // 62.14389 us"
}
