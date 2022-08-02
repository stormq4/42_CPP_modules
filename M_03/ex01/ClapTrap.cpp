/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/01 11:28:37 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/08/01 14:11:17 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ): _hitPoints(10), _energyPoints(10), _attackDamage(0){
	this->_name = "";
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::~ClapTrap( void ) { 
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &origin ){
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = origin;
}

ClapTrap &ClapTrap::operator=( const ClapTrap &dup ) {
	this->_attackDamage = dup._attackDamage;
	this->_energyPoints = dup._energyPoints;
	this->_hitPoints = dup._hitPoints;
	this->_name = dup._name;
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
	return (*this);
}

ClapTrap::ClapTrap( std::string name ): _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	this->_name = name;
	std::cout << "ClapTrap string_name constructor called" << std::endl;
}

void	ClapTrap::attack( const std::string &target ) {
	if (_energyPoints > 0 && _hitPoints > 0) {
		std::cout << "ClapTrap " << _name << " attacks " << target << " causing, " << _attackDamage << " points of damage!" << std::endl; 
		_energyPoints--;
	}
	else if (_energyPoints <= 0){
		std::cout << "ClapTrap "<< _name << " has no energy " << std::endl;
	}
	else if (_hitPoints) {
		std::cout << "ClapTrap "<< _name << " is dead " << std::endl;
	}
}

void	ClapTrap::takeDamage( unsigned int amount ) {
	_hitPoints -= amount;
	if (_hitPoints <= 0) {
		std::cout << "ClapTrap "<< _name << " is dead " << std::endl;
	}
	else {
		std::cout << "Claptrap " << _name << " takes " << amount << " damage and has " << _hitPoints << " hitpoints" << std::endl;
	}
}

void	ClapTrap::beRepaired( unsigned int amount ) { 
	if (_energyPoints > 0 && _hitPoints > 0) {
		std::cout << "ClapTrap " << _name << " is repairing itself" << std::endl;
		_hitPoints += amount;
		_energyPoints--;
	}
	else if (_energyPoints <= 0){
		std::cout << "ClapTrap "<< _name << " has no energy " << std::endl;
	}
	else if (_hitPoints <= 0) {
		std::cout << "ClapTrap "<< _name << " is dead " << std::endl;
	}
}
