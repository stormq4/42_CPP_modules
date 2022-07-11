/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/11 11:37:47 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/07/11 12:11:37 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	std::cout << "announcing zombies" << std::endl;

	int	N = 4;
	std::cout << "announcing zombie list size " << N << " named Quefftar" << std::endl;
	Zombie	*zList = zombieHorde(N, "Quefftar");

	for (int i = 0; i < N; i++) {
		zList[i].announce();
	}
	delete[] zList;
	
	std::cout << " ------ \n";
	N = 10;
	std::cout << "announcing zombie list size " << N << " named Krongo" << std::endl;
	zList = zombieHorde(N, "Krongo");

	for (int i = 0; i < N; i++) {
		zList[i].announce();
	}
	delete[] zList;
	// system("leaks zombie");
	return (0);
}
