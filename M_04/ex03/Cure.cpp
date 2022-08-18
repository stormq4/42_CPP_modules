/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 14:02:23 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/08/18 16:14:53 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

#include <string>
#include <iostream>

Cure::Cure()
: AMateria("cure") {

}

Cure::Cure(const Cure& ref)
{
	*this = ref;
}

Cure&	Cure::operator=(const Cure& ref)
{
	(void)ref;
	return *this;
}

Cure::~Cure()
{
	
}

Cure	*Cure::clone() const {
	return new Cure(*this);
}

void	Cure::use(ICharacter &target){
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
