/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/14 15:35:35 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/08/02 12:05:53 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
#include <iostream>
#include <stdlib.h>
#include <string>

class ClapTrap{
	public:
		ClapTrap( void );
		~ClapTrap( void );
		ClapTrap( const ClapTrap &origin );
		ClapTrap &operator=( const ClapTrap &dup );

		ClapTrap( const std::string name );
		
		void	attack( const std::string &target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );

	private:
		std::string	_name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;
		
};

#endif
