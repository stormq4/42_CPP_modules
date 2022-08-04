/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/04 17:15:29 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/08/04 17:16:44 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void ) {
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain( const Brain& ref ) {
	*this = ref;
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain&	Brain::operator=( const Brain& ref ) {
	
	std::cout << "Brain copy operator called" << std::endl;
	*this->_ideas = *ref._ideas;
	return (*this);
}

Brain::~Brain( void ) {
	std::cout << "Brain destructor called" << std::endl;

}
