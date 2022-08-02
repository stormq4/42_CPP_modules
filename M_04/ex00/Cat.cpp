/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/02 17:19:52 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/08/02 17:25:26 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void )
: Animal("Cat") {
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::~Cat( void ) {
	std::cout << "Cat default destructor called" << std::endl;
}

Cat::Cat( const Cat &origin ) {
	std::cout << "Cat default copy called" << std::endl;
	*this = origin;
}

Cat	&Cat::operator=( const Cat &dup ){
	this->_type = dup._type;
	return (*this);
}
