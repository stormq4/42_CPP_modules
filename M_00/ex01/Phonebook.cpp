/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/21 10:31:58 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/06/30 16:53:27 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "Constructor PhoneBook" << std::endl;
	_contact_nr = 0;
	_index = 0;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Destructor PhoneBook" << std::endl;
	return ;
}

void	PhoneBook::AddContact(void)
{
	_contacts[_contact_nr].NewContact();
	_contact_nr = (_contact_nr + 1) % 8;
	_index++;
}

int	ReturnDigit(std::string	Buff, int max)
{
	int	index;

	for(unsigned long i = 0; i < Buff.length(); i++)
		if (std::isdigit(Buff[i]) == 0) return (-1);
	index = std::atoi(const_cast<char*>(Buff.c_str()));
	if (index < 1 || index > max)
		return (-1);
	return (index);
}

void	PhoneBook::PhonePromptSearchValue(void)
{
	std::string	Buff;
	int	index;
	int	max;

	if (!_index) return;
	if (_index >= 8) max = 8;
	else max = _contact_nr;
	while (1)
	{
		std::cout << "Please fill in a digit rangeing from " << 1 << " - " << max << std::endl;
		std::getline(std::cin, Buff);
		if (!std::cin)
			exit(1);
		if (std::cin)
		{
			index = ReturnDigit(Buff, max);
			if (index != -1)
				break ;
		}
	}
	_contacts[index - 1].PrintContactData();
}

void	PhoneBook::SearchContacts(void)
{
	int	max;

	if (_index >= 8) max = 8;
	else max = _contact_nr;
	std::cout << std::setw(10);
	std::cout << "index";
	PrintContactColumn("first name");
	PrintContactColumn("last name");
	PrintContactColumn("nickname");
	std::cout << std::endl;
	for (int i = 0; i < max; i++)
	{
		std::cout << std::setw(10);
		std::cout << i + 1;
		_contacts[i].PrintSearchInfo();
		std::cout << std::endl;
	}
	PhoneBook::PhonePromptSearchValue();
	return ;
}
