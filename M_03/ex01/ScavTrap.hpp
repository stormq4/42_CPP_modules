/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: stormdequay <stormdequay@student.codam.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/02 09:28:54 by stormdequay   #+#    #+#                 */
/*   Updated: 2022/08/02 13:29:16 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	
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
