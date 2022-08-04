/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/02 16:48:13 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/08/04 14:40:44 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void )
: _type("") {
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::~Animal( void ) {
	std::cout << "Animal default destructor called" << std::endl;
}

Animal::Animal( const Animal &origin ) {
	*this = origin;
}

Animal::Animal( const std::string type )
: _type(type) {
	std::cout << "Animal type constructor called" << std::endl;
}

Animal	&Animal::operator=( const Animal &dup ){
	this->_type = dup._type;
	return (*this);
}

std::string	Animal::getType( void ) const { return (_type); }

void Animal::makeSound( void ) const {}
