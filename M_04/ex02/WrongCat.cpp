/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/02 17:19:52 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/08/04 14:08:09 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void )
: WrongAnimal("WrongCat") {
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::~WrongCat( void ) {
	std::cout << "WrongCat default destructor called" << std::endl;
}

WrongCat::WrongCat( const WrongCat &origin ) {
	std::cout << "WrongCat default copy called" << std::endl;
	*this = origin;
}

WrongCat	&WrongCat::operator=( const WrongCat &dup ){
	std::cout << "WrongCat copy assignment called" << std::endl;
	this->_type = dup._type;
	return (*this);
}

void	WrongCat::makeSound( void ) const { std::cout << "miaaauauauuaw!! - wrongcat " << std::endl; }
