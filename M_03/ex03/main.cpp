/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/01 14:01:20 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/08/02 15:13:54 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	FragTrap	superman("super man");
	DiamondTrap mario("mario");

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
	mario.attack("superman");
	superman.takeDamage(30);
}
