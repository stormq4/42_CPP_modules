/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/02 17:19:52 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/08/04 17:04:05 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void )
: Animal("Cat") {
	this->_brain = new Brain();
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::~Cat( void ) {
	delete this->_brain;
	std::cout << "Cat default destructor called" << std::endl;
}

Cat::Cat( const Cat &origin ) {
	std::cout << "Cat copy constructor called" << std::endl;
	*this = origin;
}

Cat	&Cat::operator=( const Cat &dup ){
	std::cout << "Cat copy assignment called" << std::endl;
	this->_type = dup._type;
	return (*this);
}

void	Cat::makeSound( void ) const { std::cout << "miaaauauauuaw!!" << std::endl; }
