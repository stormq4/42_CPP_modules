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
	this->parse(fileName);
	this->sort(0, this->_v.size() - 1);
}

void	PmergeMe::parse(char *fileName) {
	std::ifstream	read(fileName);
	std::string 	line;

	while(getline(read, line)) {
		for (size_t i = 0; i < line.length(); i++) if (!isdigit(line[i])) {
				std::cerr << "Error: Bad input => " << line << std::endl;
				exit(1);
			}
		int num = std::stoi(line);
		this->_v.push_back(num);
	}
}

void	PmergeMe::sort(size_t begin, size_t end) {
	size_t	mid = (begin + end) / 2;
	if (mid == 2) {
		std::cout << "mid: " << mid << std::endl;
		std::cout << "begin: " << begin << std::endl;
		std::cout << "end: " << end << std::endl;
	}
	sort(begin, mid);
	sort(mid + 1, end);
	merge(begin, mid, end);
}