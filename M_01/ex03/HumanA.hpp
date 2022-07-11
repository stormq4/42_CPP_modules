/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/11 13:50:04 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/07/11 14:54:36 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"

class HumanA {
	
	public:
		HumanA(std::string name, Weapon &weaponName);
		~HumanA( void );
		void	attack( void );

	private:
		Weapon		&wName;
		std::string	name;
};

#endif
