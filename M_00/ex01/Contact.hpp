/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/21 10:32:19 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/06/30 11:32:46 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <stdio.h>

class Contact
{
	public:
	
		Contact(void);
		~Contact(void);
		void	NewContact(void);
		void	PrintSearchInfo(void);
		void	PrintContactData(void);

	private :
		std::string	_firstname;
		std::string _lastname;
		std::string	_nickname;
		std::string	_phonenumber;
		std::string	_darkestsecret;
	
};

void	PrintContactColumn(std::string Info);

#endif
