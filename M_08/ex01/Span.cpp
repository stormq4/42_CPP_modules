/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/25 16:42:27 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/08/25 16:50:45 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <vector>
#include <exception>

Span::Span(): _N(0) {
	std::cout << "Span default constructor called\n";
}

Span::Span(unsigned int N): _N(N) {
	std::cout << "Span N constructor called\n";
}

Span::~Span() {
	std::cout << "Span destructor called\n";
}

// Span::Span(const Span &ref) {
	
// }

// Span	&Span::operator=(const Span &ref){
	
// }

void	Span::shortestSpan() {
	if (_elem.size() < 2){
		throw std::out_of_range("Not enough elements"); 
		return ;
	}
}

void	Span::longestSpan() {
	if (_elem.size() < 2){
		throw std::out_of_range("Not enough elements"); 
		return ;
	}
}

void	Span::addNumber(int number) {
	if (_elem.size() + 1 >= _N) {
		throw std::out_of_range("Could not add number, since out of range"); 
		return ;
	}
	_elem.push_back(number);
}
