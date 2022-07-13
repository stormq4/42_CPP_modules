/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/12 13:46:01 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/07/13 17:56:14 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

// constructors and detructors
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

/* operators 

*/
Fixed	&Fixed::operator=( const Fixed &duplicate ) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixedPointNr = duplicate._fixedPointNr;
	return *this;
}

std::ostream & operator<<(std::ostream &os, Fixed const &floatConv){
	os << floatConv.toFloat();
	return (os);
}

// comparison
bool	Fixed::operator>(const Fixed &A) const {return (this->toFloat() > A.toFloat());}
bool	Fixed::operator<(const Fixed &A) const {return (this->toFloat() < A.toFloat());}
bool	Fixed::operator>=(const Fixed &A) const {return (this->toFloat() >= A.toFloat());}
bool	Fixed::operator<=(const Fixed &A) const{return (this->toFloat() <= A.toFloat());}
bool	Fixed::operator==(const Fixed &A) const{return (this->toFloat() == A.toFloat());}
bool	Fixed::operator!=(const Fixed &A) const{return (this->toFloat() != A.toFloat());}

// arithmetic
Fixed	Fixed::operator+(const Fixed &A) const {
	Fixed fixNew;

	fixNew._fixedPointNr = this->_fixedPointNr + A._fixedPointNr;
	return (fixNew);
}

Fixed	Fixed::operator-(const Fixed &A) const {
	Fixed fixNew;

	fixNew._fixedPointNr = this->_fixedPointNr - A._fixedPointNr;
	return (fixNew);
}

Fixed	Fixed::operator*(const Fixed &A) const {
	return (Fixed (this->toFloat() * A.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &A) const {
	return (Fixed(this->toFloat() / A.toFloat()));
}

// (inc/dec)rement
Fixed	&Fixed::operator++( void ) {
	this->_fixedPointNr++;
	return (*this);
}

Fixed	&Fixed::operator--( void ) {
	this->_fixedPointNr--;
	return (*this);
}

Fixed	Fixed::operator++( int ) {
	Fixed	oldMember(*this);
	
	++(*this);
	return (oldMember);
}

Fixed	Fixed::operator--( int ) {
	Fixed	oldMember(*this);
	
	--(*this);
	return (oldMember);
}

/* member functions
	
*/
Fixed	&Fixed::min(Fixed &first, Fixed &second){
	if (first < second)
		return (first);
	return (second);
}

const Fixed	&Fixed::min(const Fixed &first, const Fixed &second){
	if (first < second)
		return (first);
	return (second);
}

Fixed	&Fixed::max(Fixed &first, Fixed &second){
	if (first > second)
		return (first);
	return (second);
}

const Fixed	&Fixed::max(const Fixed &first, const Fixed &second){
	if (first > second)
		return (first);
	return (second);
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
