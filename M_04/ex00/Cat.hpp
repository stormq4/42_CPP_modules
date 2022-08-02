/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/02 16:54:14 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/08/02 16:56:21 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal {
		public:
		Cat( void );
		~Cat( void );
		Cat( const Cat &origin);
		
		Cat	&operator=( const Cat &dup );
		
};

#endif
