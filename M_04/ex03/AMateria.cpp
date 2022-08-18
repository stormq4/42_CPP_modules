/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 14:02:11 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/08/18 17:16:59 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

#include <string>
#include <iostream>

AMateria::AMateria() {

}

AMateria::AMateria(const AMateria& ref) {
	*this = ref;
}

AMateria&	AMateria::operator=(const AMateria& ref) {
	_type = ref.getType();
	return *this;
}

AMateria::~AMateria() {

}

std::string const &AMateria::getType() const {
	return _type;
}

AMateria::AMateria(std::string const & type) 
: _type(type) {
	
}

void	AMateria::use(ICharacter &target) {
	std::cout << " * uses materia on " << target.getName() << " *" << std::endl;
}
