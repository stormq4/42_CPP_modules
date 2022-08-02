/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: stormdequay <stormdequay@student.codam.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/02 09:32:22 by stormdequay   #+#    #+#                 */
/*   Updated: 2022/08/02 13:51:23 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// (con/de)structors 
FragTrap::FragTrap( void )
: ClapTrap("", 100, 100, 30) {
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::~FragTrap( void ) {
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap( const FragTrap &origin ) {
	*this = origin;
}

FragTrap::FragTrap( const std::string name )
: ClapTrap(name, 100, 100, 30) {
	std::cout << "FragTrap name constructor called" << std::endl;
}

// Copy assignment
FragTrap	&FragTrap::operator=( const FragTrap &dup ) {
	this->_attackDamage = dup._attackDamage;
	this->_energyPoints = dup._energyPoints;
	this->_hitPoints = dup._hitPoints;
	this->_name = dup._name;
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	return (*this);
}

// Functions
void	FragTrap::highFivesGuys( void ) {
	std::cout << this->_name << " is requesting high fives from everyone" << std::endl;
}
