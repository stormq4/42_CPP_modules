/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/02 16:41:15 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/08/04 17:19:34 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>
#include <stdlib.h>

class Animal {
	
	public:
		Animal( void );
		virtual ~Animal( void );
		Animal( const Animal &origin);
		Animal( const std::string type );
		
		Animal			&operator=( const Animal &dup );
		
		virtual void		makeSound( void ) const;
		std::string			getType( void ) const;
	
	protected:
		std::string	_type;
	
	
};

#endif
