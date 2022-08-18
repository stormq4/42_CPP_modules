/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 14:02:05 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/08/18 17:29:33 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

#include <string>
#include <iostream>

Ice::Ice()
: AMateria("ice"){

}

Ice::Ice(const Ice& ref) {
	*this = ref;
}

Ice&	Ice::operator=(const Ice& ref)
{
	(void)ref;
	return *this;
}

Ice::~Ice() {
	
}

void Ice::use(ICharacter &c) {
	std::cout << "* shoots an ice bolt at " << c.getName() << " * "<< std::endl;
}

Ice *Ice::clone() const {
	return new Ice(*this);
}
