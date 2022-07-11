/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/11 13:56:33 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/07/11 15:26:25 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	return ;
}

void	HumanB::setWeapon(Weapon &newWeapon)
{
	this->wName = &newWeapon;
}

HumanB::~HumanB( void )
{
	return ;
}

void	HumanB::attack( void )
{
	if (wName)
		std::cout << name << " attacks with their " << wName->getType() << std::endl;
	else
		std::cout << name << " has no weapon " << std::endl;
}
