/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/11 13:41:57 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/07/11 14:25:41 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type){	this->type = type;}

void	Weapon::setType(std::string type){	this->type = type;}

const std::string	&Weapon::getType( void )
{
	return type;
}

Weapon::~Weapon( void ) {}
