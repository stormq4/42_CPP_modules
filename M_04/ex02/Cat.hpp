/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/02 16:54:14 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/08/05 16:12:15 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal {
		public:
			Cat( void );
			~Cat( void );
			Cat( const Cat &origin);
			
			Cat	&operator=( const Cat &dup );

			void	makeSound( void ) const;
			Brain	*getBrain() const;

		private:
			Brain	*_brain;

};

#endif
