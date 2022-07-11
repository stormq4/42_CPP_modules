/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/30 13:58:51 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/07/11 11:41:02 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "constructor called" << std::endl;
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << "destructor: " << this->name << std::endl;
	return ;
}

void	Zombie::assignName( std::string name )
{
	this->name = name;
}

void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
