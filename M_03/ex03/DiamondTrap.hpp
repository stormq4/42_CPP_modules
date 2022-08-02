/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/02 13:12:26 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/08/02 14:56:41 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap {
	
	public:
		DiamondTrap( void );
		~DiamondTrap( void );
		DiamondTrap( const DiamondTrap &origin );
		DiamondTrap( const std::string name );
		
		DiamondTrap &operator=( const DiamondTrap &dup );
	
		void	attack( const std::string &target );
		void	whoAmI( void );
		
	private:
		std::string	_name;
};

#endif
