/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: stormdequay <stormdequay@student.codam.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/02 09:28:54 by stormdequay   #+#    #+#                 */
/*   Updated: 2022/08/02 12:02:51 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAPP_HPP
# define SCAVTRAPP_HPP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	
	public:
		ScavTrap( void );
		~ScavTrap( void );
		ScavTrap( const ScavTrap &origin );
		ScavTrap &operator=( const ScavTrap &dup );
	
		ScavTrap( const std::string name );
		void	guardGate( void );
	
};

#endif