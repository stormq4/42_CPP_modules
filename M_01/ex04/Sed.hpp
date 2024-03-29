/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sed.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/11 15:32:42 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/07/12 08:58:42 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>

class Sed {
	
	public:
		Sed(std::string fName, std::string s1, std::string s2);
		~Sed( void );
		void	readFile( void );

	private:
		std::string	filename;
		std::string	s1;
		std::string	s2;

};

#endif
