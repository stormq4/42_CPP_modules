/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/14 15:35:35 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/07/14 15:58:21 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include <string>

class ClapTrap{
	public:
		ClapTrap( void );
		~ClapTrap( void );
		ClapTrap( const ClapTrap &origin );
		ClapTrap( const std::string name );
		ClapTrap &operator=( const ClapTrap &duplicate );

		void	attack( const std::string &target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );

	private:
		const std::string	_name;
		unsigned int		_hitPoints = 10;
		unsigned int		_energyPoints;
		int					_attackDamage;
		
};
