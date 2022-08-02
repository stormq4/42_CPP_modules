/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/01 14:01:20 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/08/02 12:06:58 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap	grocco("grocco");
	ClapTrap	kolumbo("kolumbo");
	
	ScavTrap	ironman("iron man");
	FragTrap	superman("super man");

	
	ironman.attack("grocco");
	grocco.takeDamage(20);
	ironman.guardGate();
	grocco.attack("iron man");
	ironman.guardGate();
	superman.attack("kolumbo");
	kolumbo.takeDamage(30);
	for (int i = 0; i < 4; i++) {
		superman.attack("iron man");
		ironman.takeDamage(30);
	}
	superman.highFivesGuys();
	std::cout << "However everyone is dead" << std::endl;
}
