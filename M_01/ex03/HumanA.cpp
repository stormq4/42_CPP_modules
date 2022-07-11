/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/11 13:56:33 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/07/11 14:56:54 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weaponName): wName(weaponName)
{
	this->name = name;
	return ;
}

HumanA::~HumanA( void ) {return ;}

void	HumanA::attack( void )
{
	std::cout << name << " attacks with their " << wName.getType() << std::endl;
}
