/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/12 09:38:01 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/07/12 10:50:43 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>
#include <stdlib.h>

class Harl {
	public :
		Harl( void );
		~Harl( void );
		void complain( std::string level );
		
	private :
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
} ;

#endif
