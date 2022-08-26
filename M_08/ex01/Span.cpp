/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/25 16:42:27 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/08/26 14:57:54 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <vector>
#include <exception>
#include <algorithm>

Span::Span(): _N(0) {
	std::cout << "Span default constructor called\n";
}

Span::Span(unsigned int N): _N(N) {
	std::cout << "Span N constructor called with size " << _N << "\n";
}

Span::~Span() {
	std::cout << "Span destructor called\n";
}

Span::Span(const Span &ref) {
	*this = ref;
}

Span	&Span::operator=(const Span &ref){
	this->_elem = ref._elem;
	this->_N = ref._N;
	return *this;
}

int	Span::operator[](int idx){
	try	{
		if (idx < 0 || idx > static_cast<int>(_elem.size()))
			throw (std::out_of_range("No valid index for element in span"));
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	return _elem[idx];
}

int	Span::shortestSpan() {
	std::vector<int>			tmpElem;
	int							shortest;

	try	{
		if (_elem.size() < 2)
			throw std::out_of_range("Not enough elements");
		tmpElem = _elem;
		std::sort(tmpElem.begin(), tmpElem.end());
		for (int i = 0; i < static_cast<int>(tmpElem.size()) - 1; i++){
			if (tmpElem[i] - tmpElem[i + 1] < shortest)
				shortest = tmpElem[i] - tmpElem[i + 1];
		}
	}	
	catch (const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	if (shortest < 0)
		shortest = -shortest;
	return shortest;
}

int	Span::longestSpan() {
	std::vector<int>::iterator	min;
	std::vector<int>::iterator	max;
	int							longest;

	try	{
		if (_elem.size() < 2)
			throw std::out_of_range("Not enough elements");
		min = std::min_element(_elem.begin(), _elem.end());
		max = std::max_element(_elem.begin(), _elem.end());
		longest = *max - *min;
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	return longest;
}

void	Span::addNumber(int number) {
	try {
		if (_elem.size() + 1 >= _N) {
			throw std::out_of_range("Could not add number, since out of range"); 
		}
		_elem.push_back(number);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << '\n';
	}
}

static int returnRandomNumber(void) {
	return rand() % 1000;
}

void	Span::addManyNumbers(int amount) {
	std::vector<int> addVector(amount, 1);
	try	{
		if (amount + _elem.size() > _N)
			throw std::out_of_range("Could not add many numbers, since out of range");
		std::generate_n(addVector.begin(), amount, returnRandomNumber);
		_elem.insert(_elem.end(), addVector.begin(), addVector.end());
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
}
