/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 14:02:17 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/08/18 17:35:56 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

#include <string>
#include <iostream>

Character::Character()
:_name("") {
	for (int i = 0; i < 4; i++){
		array[i] = nullptr;
	}
	_oldArraySize = 0;
	oldArray = nullptr;
}

Character::Character( std::string name ): _name(name) {
	for (int i = 0; i < 4; i++){
		array[i] = nullptr;
	}
	_oldArraySize = 0;
	oldArray = nullptr;
}


Character::Character(const Character& ref)
{
	for (int i = 0; i < 4; i++){
		delete [] array[i];
		array[i] = ref.array[i];
	}
	_name = ref.getName();
}

Character&	Character::operator=(const Character& ref)
{
	_name = ref.getName();
	return *this;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++ ){
		delete array[i];
	}
	for (int i = 0; i < _oldArraySize; i++){
		delete oldArray[i];
	}
	delete [] oldArray;
}

void	Character::equip(AMateria *m) {
	for (int i = 0; i < 4; i++){
		if (!array[i]){	
			array[i] = m;
			return ;
		}
	}
}

void	Character::unequip( int idx ) {
	if (!_oldArraySize){
		oldArray = new AMateria*[1];
		_oldArraySize++;
		oldArray[0] = array[idx];
	}
	else {
		AMateria **tmpArray = new AMateria*[_oldArraySize + 1];
		for (int i = 0; i < 4; i++) {
			tmpArray[i] = oldArray[i];
		}
		delete [] oldArray;
		oldArray = tmpArray;
	}
	array[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target) {
	array[idx]->use(target);
}

std::string const & Character::getName() const {
	return _name;
}
