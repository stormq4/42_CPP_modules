/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/12 09:48:22 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/07/12 11:29:12 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void ){}

Harl::~Harl( void ){}

void	Harl::complain( std::string level )
{
	std::string levels[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	int i;
	for (i = 0; i < 4; i++){
		if (levels[i].compare(level) == 0)
			break ;
	}
	if (i == 4)
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	for (; i < 4; i++) {
		switch (i) {
			case 0:
				std::cout << "[ DEBUG ]" << std::endl;
				debug();
				std::cout << std::endl;
				break ;
			case 1:
				std::cout << "[ INFO ]" << std::endl;
				info();
				std::cout << std::endl;
				break ;
			case 2:
				std::cout << "[ WARNING ]" << std::endl;
				warning();
				std::cout << std::endl;
				break ;
			case 3:
				std::cout << "[ ERROR ]" << std::endl;
				error();
				std::cout << std::endl;
				break;
		}
	}

}

void	Harl::debug( void )
{
	std::cout <<  "love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup"; 
	std::cout << "burger. I really do!" << std::endl;
}

void	Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t ";
	std::cout << "putenough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
