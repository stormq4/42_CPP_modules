/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/11 13:50:04 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/07/11 15:21:31 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"

class HumanB {
	
	public:
		HumanB(std::string name);
		~HumanB( void );
		void	attack( void );
		void	setWeapon(Weapon &newWeapon);

	private:
		Weapon		*wName;
		std::string	name;
};

#endif
