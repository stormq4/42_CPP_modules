/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/22 14:16:15 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/06/30 11:32:01 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	public:

		PhoneBook(void);
		~PhoneBook(void);
		void	AddContact(void);
		void	SearchContacts(void);
		void	DisplayByIndex(void);
		void	PhonePromptSearchValue(void);


	private:
		int	_contact_nr;
		int	_index;
		Contact _contacts[8];

};

#endif
