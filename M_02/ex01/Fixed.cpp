/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/12 13:46:01 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/07/13 11:55:56 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed( void ): _fixedPointNr(0) {
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed( const Fixed &origin) {	
	std::cout << "Copy constructor called" << std::endl; 
	*this = origin;
	return ;
}

Fixed::Fixed( const int val ) {
	std::cout << "Int constructor called" << std::endl;
	this->_fixedPointNr = val << this->_fractionalBits;
	return ;
}

Fixed::Fixed( const float val ) {
	std::cout << "Float constructor called" << std::endl;
	int	bitsPower = powerFunctionInt(2, this->_fractionalBits);
	this->_fixedPointNr = roundf(val * bitsPower);
}

Fixed &Fixed::operator=( const Fixed &duplicate ) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixedPointNr = duplicate._fixedPointNr;
	return *this;
}

std::ostream & operator<<(std::ostream &os, Fixed const &floatConv){
	os << floatConv.toFloat();
	return (os);
}

int		Fixed::getRawBits( void ) const { 
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedPointNr);
}

void	Fixed::setRawBits( int const raw ) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixedPointNr = raw;
}

float	Fixed::toFloat( void ) const {
	int		bitsPower = powerFunctionInt(2, this->_fractionalBits);
	float	leftNr = (float)this->_fixedPointNr / bitsPower;
	return (leftNr);
}

int	Fixed::toInt( void ) const {
	return (this->_fixedPointNr >> this->_fractionalBits);
}

int	powerFunctionInt( int ground, int power) {
	int base = ground;
 
	if (power == 0)
		return (1);
	else if (power > 0){
		for (int i = 1; i < power; i++) {
			ground *= base;
		}	
	}
	else
		ground = 1 / (ground * powerFunctionInt(base, 1 - power));
	return (ground);
}
