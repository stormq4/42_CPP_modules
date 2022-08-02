/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: stormdequay <stormdequay@student.codam.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/02 09:28:54 by stormdequay   #+#    #+#                 */
/*   Updated: 2022/08/02 14:40:52 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAPP_HPP
# define SCAVTRAPP_HPP
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
	
	public:
		ScavTrap( void );
		~ScavTrap( void );
		ScavTrap( const ScavTrap &origin );
		ScavTrap &operator=( const ScavTrap &dup );
	
		ScavTrap( const std::string name );
		void	guardGate( void );
		void	attack( const std::string &target );
	
};

#endif
