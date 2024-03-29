/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/01 14:01:20 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/08/02 11:52:49 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap	grocco("grocco");
	ClapTrap	kolumbo("kolumbo");
	
	ScavTrap	ironman("iron man");
	
	ironman.attack("grocco");
	grocco.takeDamage(20);
	ironman.guardGate();
	grocco.attack("iron man");

	ScavTrap	spiderman = ironman;
}
