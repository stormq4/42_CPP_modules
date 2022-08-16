/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/04 17:15:29 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/08/05 14:55:57 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void ) {
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain( const Brain& ref ) {
	std::cout << "Brain copy constructor called" << std::endl;
	*this = ref;
}

Brain&	Brain::operator=( const Brain& ref ) {
	std::cout << "Brain copy assingment called" << std::endl;
	for (int i = 0; i < 100; i++) {
		_ideas[i] = ref._ideas[i];
	}
	return (*this);
}

Brain::~Brain( void ) {
	std::cout << "Brain destructor called" << std::endl;
}
