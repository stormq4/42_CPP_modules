/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/01 14:01:20 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/08/01 14:09:22 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap	grocco("grocco");
	ClapTrap	kolumbo("kolumbo");
	
	grocco.attack("kolumbo");
	kolumbo.takeDamage(9);
	kolumbo.beRepaired(20);
	for (int i = 0; i < 11; i++){
		kolumbo.attack("grocco");
		grocco.takeDamage(1);
	}
}
