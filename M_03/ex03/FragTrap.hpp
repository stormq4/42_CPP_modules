/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: stormdequay <stormdequay@student.codam.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/02 09:28:54 by stormdequay   #+#    #+#                 */
/*   Updated: 2022/08/02 14:40:44 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
	
	public:
		FragTrap( void );
		~FragTrap( void );
		FragTrap( const FragTrap &origin );
		FragTrap &operator=( const FragTrap &dup );
	
		FragTrap( const std::string name );
		void	highFivesGuys( void );
	
};

#endif
