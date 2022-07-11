/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/11 11:37:47 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/07/11 12:11:25 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	std::cout << "announcing zombies" << std::endl;

	std::cout << "new zombie with randomChump --> Graftor" << std::endl;
	randomChump("Graftor");
	std::cout<< "\n\n";
	
	std::cout << "new zombie with newZombie --> Kjeltar" << std::endl;
	Zombie *n_zom = newZombie("Kjeltar");
	delete n_zom;
	return (0);
}
