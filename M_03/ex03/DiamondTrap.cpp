/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/02 13:12:26 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/08/02 15:11:41 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void )
: ClapTrap("", 100, 50, 30), _name("") {
	ClapTrap::_name = "_clap_name";
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap( void ) {
	std::cout << "DiamondTrap default destructor called" << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap &origin) {
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = origin;
}

DiamondTrap::DiamondTrap( const std::string name )
: ClapTrap(name, 100, 50, 30), _name(name) {
	ClapTrap::_name = (name + "_clap_name");
	std::cout << "DiamondTrap name constructor called" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=( const DiamondTrap &dup ) {
	this->_attackDamage = dup._attackDamage;
	this->_energyPoints = dup._energyPoints;
	this->_hitPoints = dup._hitPoints;
	this->_name = dup._name;
	this->ClapTrap::_name = dup.ClapTrap::_name;
	std::cout << "DiamondTrap copy assignment called" << std::endl;
	return (*this);
}

void	DiamondTrap::attack( const std::string &target ) {
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI( void ) {
	std::cout << "my DiamondTrap name --> " << _name << std::endl;
	std::cout << "my ClapTrap name --> " << ClapTrap::_name << std::endl;
}
