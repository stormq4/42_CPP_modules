/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/02 17:24:23 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/08/04 13:48:38 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void )
: Animal("Dog") {
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::~Dog( void ) {
	std::cout << "Dog default destructor called" << std::endl;
}

Dog::Dog( const Dog &origin ) {
	std::cout << "Dog copy constructor called" << std::endl;
	*this = origin;
}

Dog	&Dog::operator=( const Dog &dup ){
	std::cout << "Dog copy assignment" << std::endl;
	this->_type = dup._type;
	return (*this);
}

void	Dog::makeSound( void ) const { std::cout << "Bark, Bark!!" << std::endl; }
