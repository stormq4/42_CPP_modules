/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/12 13:46:01 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/07/12 14:58:27 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

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

Fixed &Fixed::operator=( const Fixed &duplicate ) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixedPointNr = duplicate.getRawBits();
	return *this;
}

int		Fixed::getRawBits( void ) const { 
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedPointNr);
}

void	Fixed::setRawBits( int const raw ) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixedPointNr = raw;
}
