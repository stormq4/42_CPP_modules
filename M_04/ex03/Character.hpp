/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 14:02:20 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/08/18 16:09:45 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

#include <string>
#include <iostream>

class ICharacter;

class	Character : public ICharacter
{
	public:
		Character();
		Character( std::string name );
		Character(const Character& ref);
		Character& operator=(const Character& ref);
		~Character();

		std::string const &getName() const;

		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

	private:
		std::string _name;
		AMateria	*array[4];
		AMateria	**oldArray;
		int			_oldArraySize;
};

#endif
