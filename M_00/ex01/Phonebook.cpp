/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/21 10:31:58 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/04/21 15:33:38 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

char	*CheckValidPhoneNumber(char *Buff)
{
	for (char *NewBuff = Buff; *NewBuff; NewBuff++)
		if (!std::isdigit(*NewBuff))
			return ("NaN");
	return (Buff);
}

void	AddContact(int *ContactNR, Contact	*Contacts)
{
	Contact	NewContact;
	char	Buff[1024];

	std::cout << std::endl;
	std::cout << "First name:";
	std::cin >> Buff;
	NewContact.FirstName = Buff;
	std::cout << std::endl;
	std::cout << "Last name: ";
	std::cin >> Buff;
	NewContact.LastName = Buff;
	std::cout << std::endl;
	std::cout << "Nick name: ";
	std::cin >> Buff;
	NewContact.NickName = Buff;	
	std::cout << std::endl;
	std::cout << "PhoneNumber: ";
	std::cin >> Buff;
	NewContact.PhoneNumber = CheckValidPhoneNumber(Buff);
	// std::cout << std::endl;
	// std::cout << "Darkest secret: ";
	// std::cin >> Buff;
	// NewContact.DarkestSecret = Buff;
	// (*ContactNR)++;
	Contacts[*ContactNR % 8] = NewContact;
	
}

int	main(void)
{
	char	Buff[512];
	Contact	PhoneBook[8];
	int		ContactNr = 0;
	
	std::cout << Buff << std::endl;
	while (1)
	{
		std::cin >> Buff;
		if (std::strcmp(Buff, "ADD"))
			AddContact(&ContactNr, PhoneBook);
		else if (std::strcmp(Buff,"SEARCH"))
			printf("hallooo\n");
		else if (std::strcmp(Buff, "EXIT"))
			break ;
	}
	std::cout << PhoneBook[0].LastName << std::endl;
	return (0);
}
