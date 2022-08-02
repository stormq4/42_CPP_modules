/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/01 14:01:20 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/08/02 15:58:44 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	FragTrap	superman("super man");
	DiamondTrap mario("mario");
	ClapTrap	kronos("kronos");

	superman.highFivesGuys();
	std::cout << "However everyone is dead" << std::endl;
	mario.whoAmI();
	mario.guardGate();
	mario.attack("superman");
	superman.takeDamage(30);
	mario.attack("superman");
	superman.takeDamage(30);
	mario.attack("superman");
	superman.takeDamage(30);
	
	std::cout << "-------------------" << std::endl;

	DiamondTrap luigi = mario;
	std::cout << "-------------------" << std::endl;
	DiamondTrap waluigi( mario );
	std::cout << "-------------------" << std::endl;
	waluigi.whoAmI();
	waluigi.highFivesGuys();
	waluigi.attack("Pietertje");
	kronos.attack("gradus");
	superman.attack("mario");
	waluigi.takeDamage( 30 );
	
	std::cout << "-------------------" << std::endl;
	DiamondTrap trap;
	std::cout << "-------------------" << std::endl;

}
