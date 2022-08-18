/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 14:13:26 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/08/18 16:08:50 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

#include <string>
#include <iostream>

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++) {
		_elements[i] = nullptr;
	}
}

MateriaSource::MateriaSource(const MateriaSource& ref)
{
	*this = ref;
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& ref)
{
	(void)ref;
	return (*this);
}

MateriaSource::~MateriaSource()
{

}

void	MateriaSource::learnMateria(AMateria *m) {
	for (int i = 0; i < 4; i++) {
		if (!_elements[i]) {
			_elements[i] = m;
			return ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++) {
		if (_elements[i] && _elements[i]->getType() == type)
			return _elements[i];
	}
	return nullptr;
}
