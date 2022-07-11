/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   zombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/11 11:54:05 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/07/11 13:46:08 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name )
{
	Zombie *newZom = new Zombie[N];
	for (int i = 0; i < N; i++) {
		newZom[i].assignName(name);
	}
	return newZom;
}
