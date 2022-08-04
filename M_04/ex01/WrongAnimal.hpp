/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/04 14:00:02 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/08/04 14:03:10 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>
#include <stdlib.h>

class WrongAnimal {
	
	public:
		WrongAnimal( void );
		~WrongAnimal( void );
		WrongAnimal( const WrongAnimal &origin);
		WrongAnimal( const std::string type );
		
		WrongAnimal			&operator=( const WrongAnimal &dup );
		
		virtual void		makeSound( void ) const;
		std::string			getType( void ) const;
	
	protected:
		std::string	_type;

};

#endif
