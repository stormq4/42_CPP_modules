/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/04 17:15:40 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/08/05 15:54:19 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <stdlib.h>
#include <iostream>
#include <string>

class	Brain
{
	public:
		Brain();
		Brain(const Brain& ref);
		Brain& operator=(const Brain& ref);
		~Brain();
		std::string	_ideas[100];

};

#endif
