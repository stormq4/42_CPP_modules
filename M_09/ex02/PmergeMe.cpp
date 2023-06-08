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
	this->_d = ref._d;
	this->_tmp = ref._tmp;
	this->_tmpDeq = ref._tmpDeq;
	this->_initVal = ref._initVal;
    return *this;
}

void    PmergeMe::run(int argc, char **argv) {
    try {
	    this->parse(argc, argv);
		double vecTime = this->runVec();
        double deqTime = this->runDeq();
		this->test();
		this->print(vecTime, deqTime);
    } catch (std::exception &e) {
        std::cerr << "Error " << e.what() << std::endl;
        exit(1);
    }
}

void	PmergeMe::parse(int argc, char **argv) {
    for (int i = 1; i < argc; i++) {
        char *cLine = argv[i];
	    std::string 	line(cLine);
        if (line.empty()) {
            std::cerr << "Error" << std::endl;
            exit(1);
        }
        for (size_t j = 0; j < line.length(); j++) {
            if (!isdigit(line[j])) {
                std::cerr << "Error" << std::endl;
                exit(1);
            }
        }
        int num = std::stoi(line);
        this->_initVal.push_back(num);
    }
}

double PmergeMe::runVec()  {
	clock_t startVec = clock();
	this->_v.resize(this->_initVal.size());
	this->_tmp.resize(this->_initVal.size());
	for (size_t i = 0; i < this->_initVal.size(); i++) this->_v[i] = this->_initVal[i];
	SortFJ<std::vector<int> >	sortVec;
	sortVec.sort(0, this->_v.size(), this->_v, this->_tmp);
	clock_t endVec = clock();
	return (double)(endVec - startVec) / CLOCKS_PER_SEC * 1000000;
}

double PmergeMe::runDeq() {
	clock_t startDeq = clock();
	this->_d.resize(this->_initVal.size());
	this->_tmpDeq.resize(this->_initVal.size());
	for (size_t i = 0; i < this->_initVal.size(); i++) this->_d[i] = this->_initVal[i];
	SortFJ<std::deque<int> >	sortDeq;
	sortDeq.sort(0, this->_d.size(), this->_d, this->_tmpDeq);
	clock_t endDeq = clock();
	return (double)(endDeq - startDeq) / CLOCKS_PER_SEC * 1000000;
}

void	PmergeMe::test() {
	if (this->_v.size() != this->_d.size() && this->_v.size() != this->_initVal.size()){
		std::cerr << "Error: list different size" << std::endl;
		exit(1);
	}
	for (size_t i = 0; i < this->_v.size() - 1; i++) {
		if (this->_v[i] != this->_d[i]) {
			std::cerr << "Error: list not the same" << std::endl;
			exit(1);
		}
		if (this->_v[i] > this->_v[i + 1]) {
			std::cerr << "Error: not sorted correctly" << std::endl;
			exit(1);
		}
	}
	if (this->_v[this->_v.size() - 1] != this->_d[this->_d.size() - 1]) {
		std::cerr << "Error: list not the same" << std::endl;
		exit(1);
	}
}

void    PmergeMe::print(double vecTime, double deqTime) {
	std::cout << "Before:\t";
	for (size_t i = 0; i < this->_initVal.size(); i++) std::cout << this->_initVal[i] << " ";
	std::cout << std::endl;

	std::cout << "After:\t";
    for (size_t i = 0; i < this->_v.size(); i++) std::cout << this->_v[i] << " ";
    std::cout << std::endl;
    std::cout << "Time to process a range of " << _v.size() << " elements with std::vector : " << vecTime << " us" << std::endl; // 62.14389 us"
    std::cout << "Time to process a range of " << _d.size() << " elements with std::deque : " << deqTime << " us" << std::endl; // 62.14389 us"
}
