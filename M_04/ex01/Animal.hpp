/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/02 16:41:15 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/08/05 15:57:45 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>
#include <stdlib.h>
#include "Brain.hpp"

class Animal {
	
	public:
		Animal( void );
		virtual ~Animal( void );
		Animal( const Animal &origin);
		Animal( const std::string type );
		
		virtual Animal			&operator=( const Animal &dup );
		
		virtual void		makeSound( void ) const;
		std::string			getType( void ) const;
		virtual Brain		*getBrain() const = 0;
		
	protected:
		std::string	_type;
	
	
};

#endif
