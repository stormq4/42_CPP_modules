/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/22 15:05:52 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/06/30 11:07:28 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook Book;
	std::string	In;

	while (1)
	{
		std::cout << "Please enter SEARCH, ADD or EXIT" << std::endl;
		std::getline(std::cin, In);
		if (!std::cin)
			break ;
		else if (In == "ADD")
			Book.AddContact();
		else if (In == "SEARCH")
			Book.SearchContacts();
		else if (In == "EXIT")
			break ;
	}
	return (0);
}
