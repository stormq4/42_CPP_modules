/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/02 16:41:15 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/08/02 17:22:38 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMALHPP

#include <iostream>
#include <string>
#include <stdlib.h>

class Animal {
	
	public:
		Animal( void );
		~Animal( void );
		Animal( const Animal &origin);
		Animal(const std::string type );
		Animal	&operator=( const Animal &dup );
		
		void	makeSound();
	
	protected:
		std::string	_type;
	
};

#endif
