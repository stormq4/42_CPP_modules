/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/11 13:34:47 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/07/11 14:45:50 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <stdlib.h>
#include <iostream>
#include <string>

class Weapon {

	public:
		Weapon(std::string type);
		~Weapon( void );
		const std::string	&getType( void );
		void	setType(std::string type);

	private:
		std::string	type;
};

#endif
