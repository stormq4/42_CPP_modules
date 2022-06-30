/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/21 10:37:03 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/06/27 15:49:14 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string ReturnFilledBuff(std::string Buff)
{
	while (1)
	{
		std::getline(std::cin, Buff);
		if (!std::cin) exit(1);
		if (!Buff.empty())
			break ;
		std::cout << "-INPUT REQUIRED-\n";
	}
	return (Buff);
}

std::string CheckIfNumber(std::string Buff)
{
	bool	digit_check;

	while (1)
	{
		digit_check = true;
		for(unsigned long i = 0; i < Buff.length(); i++)
		{
			if (std::isdigit(Buff[i]) == 0)
				digit_check = false;
		}
		if (digit_check == true)
			break ;
		Buff.empty();
		Buff = ReturnFilledBuff(Buff);
	}
	return (Buff);
}

void	Contact::NewContact(void)
{
	std::string	Buff;
	
	std::cout << "First Name: ";
	Buff = ReturnFilledBuff(Buff);
	_firstname = Buff;
	Buff.clear();

	std::cout << "Last Name: ";
	Buff = ReturnFilledBuff(Buff);
	_lastname = Buff;
	Buff.clear();

	std::cout << "Nickname: ";
	Buff = ReturnFilledBuff(Buff);
	_nickname = Buff;
	Buff.clear();

	std::cout << "Phonenumber: ";
	Buff = ReturnFilledBuff(Buff); // valid phone nr
	_phonenumber = Buff;
	Buff.clear();

	std::cout << "Darkest Secret: ";
	Buff = ReturnFilledBuff(Buff);
	_darkestsecret = Buff;
	Buff.clear();
}

void	PrintContactColumn(std::string Info)
{
	std::cout << "|";
	if (Info.length() <= 10)
	{
		std::cout << std::setw(10);
		std::cout << Info;
	}
	else
	{
		for(int i = 0; i < 9; i++)
			std::cout << Info[i];
		std::cout << ".";
	}
}

void	Contact::PrintSearchInfo(void)
{
	PrintContactColumn(this->_firstname);
	PrintContactColumn(this->_lastname);
	PrintContactColumn(this->_nickname);
}

void	Contact::PrintContactData(void)
{
	std::cout << "first name: " << this->_firstname << std::endl;
	std::cout << "last name: " << this->_lastname << std::endl;
	std::cout << "nickname: " << this->_nickname << std::endl;
	std::cout << "phonenumber: " << this->_phonenumber << std::endl;
	std::cout << "darkest secret: " << this->_darkestsecret << std::endl;
}

Contact::Contact(void)
{	
	std::cout << "Constructor Contact" << std::endl;
	return ;
}

Contact::~Contact(void)
{
	std::cout << "Destuctor Contact" << std::endl;
	return ;
}
