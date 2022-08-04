/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/02 16:48:13 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/08/04 14:17:31 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void )
: _type("") {
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal( void ) {
	std::cout << "WrongAnimal default destructor called" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal &origin ) {
	*this = origin;
}

WrongAnimal::WrongAnimal( const std::string type )
: _type(type) {
	std::cout << "WrongAnimal type constructor called" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=( const WrongAnimal &dup ){
	this->_type = dup._type;
	return (*this);
}

std::string	WrongAnimal::getType( void ) const { return (_type); }

void	WrongAnimal::makeSound( void ) const { std::cout << "\"just nothing - wrong animal\"" << std::endl; }
