/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/02 17:15:45 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/08/05 16:11:37 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal {
		public:
			Dog( void );
			~Dog( void );
			Dog( const Dog &origin );
			
			Dog	&operator=( const Dog &dup );
			
			void	makeSound(void) const;
			Brain	*getBrain() const;
		
		private:
			Brain	*_brain;
};

#endif
