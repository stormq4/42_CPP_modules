/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Scalar.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/22 13:41:12 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/08/24 17:06:12 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"
#include <sstream>
#include <limits>

Scalar::Scalar() 
: _input("0") {
	std::cout << "default constructor called" << std::endl;
	this->convertLiterals();
}

Scalar::~Scalar() {
	std::cout << "destructor called" << std::endl;
}

Scalar::Scalar(std::string input)
: _input(input) {
	std::cout << "input constructor called called" << std::endl;
	this->convertLiterals();
}

Scalar::Scalar(const Scalar &ref) {
	std::cout << "copy constructor called" << std::endl;
	*this = ref;
}

Scalar	&Scalar::operator=(const Scalar &ref) {
	std::cout << "copy assignment called" << std::endl;	
	_input = ref._input;
	return (*this);
}

void	Scalar::displayLiterals( long double x ) {
	if ((x < 33 && x >= 0) || x == 127)
		std::cout << "char: Non displayable" << std::endl;
	else if (x < 0 || x > 127)
		std::cout << "char: impossible" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(x) << std::endl;
	if (x < std::numeric_limits<int>::max() && x > std::numeric_limits<int>::min())
		std::cout << "int: " << static_cast<int>(x) << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
	if (x < std::numeric_limits<float>::max() && x > -std::numeric_limits<float>::max())
		std::cout << "float: " << static_cast<float>(x) << std::endl;
	else if (x > 0)
		std::cout << "float: +inff" << std::endl;
	else
		std::cout << "float: -inff" << std::endl;
	if (x < std::numeric_limits<double>::max() && x > -std::numeric_limits<double>::max())
		std::cout << "double: " << static_cast<double>(x) << std::endl;
	else if (x > 0)
		std::cout << "double: +inf" << std::endl;
	else
		std::cout << "double: -inf" << std::endl;
}

void	Scalar::convertLiterals() {
	std::stringstream ss;
	long double x;

	if ( _input.back() == 'f' )
		_input.pop_back();
	ss << _input;
	if (ss >> x) 
		displayLiterals( x );
	else {
		std::cout << "char: impossible\nint: impossible\nfloat: nanf\ndouble: nan" << std::endl;
	}
}
