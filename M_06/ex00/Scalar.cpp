/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Scalar.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/22 13:41:12 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/08/22 14:39:26 by sde-quai      ########   odam.nl         */
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
	_charLiteral = ref._charLiteral;
	_intLiteral = ref._intLiteral;
	_floatLiteral = ref._floatLiteral;
	_doubleLiteral = ref._doubleLiteral;
	return (*this);
}

void	Scalar::convertLiterals() {
	std::stringstream ss;
	long double x;

	// trim f na laatste input 
	ss << _input;
	if (ss >> x) {
		if (x < 33 || x == 127)
			std::cout << "char: Non displayable" << std::endl;
		else
			std::cout << "char: " << static_cast<char>(x) << std::endl;
		if (x < std::numeric_limits<int>::max() && x > std::numeric_limits<int>::min())
			std::cout << "int: " << static_cast<int>(x) << std::endl;
		else
			std::cout << "int: impossible" << std::endl;
		
			
		_floatLiteral = static_cast<float>(x);
		_doubleLiteral = x;
		
		// _charLiteral = static_cast<char>(x);
		// _intLiteral = static_cast<int>(x);
		std::cout << "char: " << _charLiteral << std::endl << "int: " << _intLiteral << std::endl;
		std::cout << "float: " << _floatLiteral << "f" << std::endl << "double: " << _doubleLiteral << std::endl;
	}
	else {
		std::cout << "char: impossible\nint: impossible\nfloat: nanf\ndouble: nan" << std::endl;
	}
}
