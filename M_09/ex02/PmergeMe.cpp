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
	std::cout << "Running..." << std::endl;
	this->parse(fileName);
	std::cout << "Parsed..." << std::endl;
	_tmp.resize(this->_v.size());
	this->sort(0, this->_v.size());

	std::cout << "Sorted..." << std::endl;
	for(size_t i = 0; i < this->_v.size(); i++) std::cout << this->_v[i] << std::endl;
	std::cout << "size is : " << _v.size() << std::endl;
	std::cout << "Done..." << std::endl;
}

void	PmergeMe::parse(char *fileName) {
	std::ifstream	read(fileName);
	std::string 	line;

	while(getline(read, line)) {
		for (size_t i = 0; i < line.length(); i++) {
			if (!isdigit(line[i])) {
				std::cerr << "Error: Bad input => " << line << std::endl;
				exit(1);
			}
        }
		int num = std::stoi(line);
		this->_v.push_back(num);
	}
	this->_sqrtSize = static_cast<size_t>(sqrt(this->_v.size()));
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

// This function merges two sorted subarrays of _v into a single sorted subarray.
void PmergeMe::merge(size_t begin, size_t mid, size_t end) {
	// "i" is the index for the start of the first subarray, which goes from "begin" to "mid"
	size_t i = begin;
	// "j" is the index for the start of the second subarray, which goes from "mid" to "end"
	size_t j = mid;

	// This loop goes from "begin" to "end", effectively covering both subarrays
	for (size_t k = begin; k < end; k++) {
		// If "i" has not reached the end of the first subarray (i.e., "mid") and either "j" has reached the end of
		// the second subarray or the current element in the first subarray is less than or equal to the current
		// element in the second subarray, then the current element in the first subarray is chosen. This is the key
		// step in the merge process, where the smaller of the two elements is chosen, ensuring that the merged array is sorted.
		if (i < mid && (j >= end || _v[i] <= _v[j])) {
			_tmp[k] = _v[i];  // Move the current element of the first subarray to the temporary array
			i++;  // Move to the next element in the first subarray
		} else if (j < end) {
			// If the above condition is not met, this means that the current element in the second subarray should be chosen
			_tmp[k] = _v[j];  // Move the current element of the second subarray to the temporary array
			j++;  // Move to the next element in the second subarray
		}
	}
}
