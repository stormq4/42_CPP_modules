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

void    PmergeMe::run(char *fileName) {
    try {
	    std::cout << "Running..." << std::endl;
	    this->parse(fileName);
        std::cout << "Parsed..." << std::endl;
        _tmp.resize(this->_v.size());
        this->sort(0, this->_v.size());
        std::cout << "Sorted..." << std::endl;
        for (size_t i = 0; i < this->_v.size(); i++) { _print.push_back(this->_v[i]); }
        for(size_t i = 0; i < this->_v.size(); i++) {
            std::cout << this->_print.front() << std::endl;
            this->_print.pop_front();
        }
        std::cout << "Done..." << std::endl;
    } catch (std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
        exit(1);
    }
}

void	PmergeMe::parse(char *fileName) {
	std::ifstream	read(fileName);
	std::string 	line;

	while(getline(read, line)) {
        if (line.empty()) {
            std::cerr << "Error: Bad input => " << line << std::endl;
            exit(1);
        }
		for (size_t i = 0; i < line.length(); i++) {
            if (i == 0 && line[i] == '-') continue;
			if (!isdigit(line[i])) {
				std::cerr << "Error: Bad input => " << line << std::endl;
				exit(1);
			}
        }
		int num = std::stoi(line);
		this->_v.push_back(num);
	}
}

void	PmergeMe::sort(size_t begin, size_t end) {
	if (end - begin < 2) {
		return;
	}
    size_t	mid = begin + (end - begin) / 2;
    this->sort(begin, mid);
	this->sort(mid, end);
	this->merge(begin, mid, end);
	for (size_t i = begin; i < end; i++) this->_v[i] = this->_tmp[i];
}

void PmergeMe::merge(size_t begin, size_t mid, size_t end) {
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
