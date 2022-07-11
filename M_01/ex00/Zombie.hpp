/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/30 13:55:58 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/07/11 11:55:20 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <stdlib.h>
#include <iostream>

class Zombie
{
	public:
		Zombie( void );
		~Zombie( void );
		void	announce( void );
		void	assignName( std::string name );

	private:
		std::string	name;
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );
