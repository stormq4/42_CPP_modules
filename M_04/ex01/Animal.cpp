/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/02 16:48:13 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/08/05 13:18:06 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void )
: _type("") {
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::~Animal( void ) {
	std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal( const Animal &origin ) {
	std::cout << "Animal copy constructor called" << std::endl;
	*this = origin;
}

Animal::Animal( const std::string type )
: _type(type) {
	std::cout << "Animal type constructor called" << std::endl;
}

Animal	&Animal::operator=( const Animal &dup ){
	std::cout << "Animal copy operator called" << std::endl;
	this->_type = dup._type;
	return (*this);
}

std::string	Animal::getType( void ) const { return (_type); }

void Animal::makeSound( void ) const {}
