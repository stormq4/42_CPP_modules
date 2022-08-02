/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/02 17:15:45 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/08/02 17:16:09 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Dog: public Animal {
		public:
		Dog( void );
		~Dog( void );
		Dog( const Dog &origin);
		
		Dog	&operator=( const Dog &dup );
		
};

#endif
