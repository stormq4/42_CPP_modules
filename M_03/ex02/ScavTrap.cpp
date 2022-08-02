/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: stormdequay <stormdequay@student.codam.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/02 09:32:22 by stormdequay   #+#    #+#                 */
/*   Updated: 2022/08/02 11:43:13 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// (con/de)structors 
ScavTrap::ScavTrap( void )
: ClapTrap("", 100, 50, 20) {
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::~ScavTrap( void ) {
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap &origin ) {
	*this = origin;
}

ScavTrap::ScavTrap( const std::string name )
: ClapTrap(name, 100, 50, 20) {
	std::cout << "ScavTrap name constructor called" << std::endl;
}

// Copy assignment
ScavTrap	&ScavTrap::operator=( const ScavTrap &dup ) {
	this->_attackDamage = dup._attackDamage;
	this->_energyPoints = dup._energyPoints;
	this->_hitPoints = dup._hitPoints;
	this->_name = dup._name;
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	return (*this);
}

// Functions
void	ScavTrap::guardGate( void ) {
	std::cout << this->_name << " is now in Gate keeping mode" << std::endl;
}
