/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/11 12:22:16 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/07/11 14:24:57 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <stdlib.h>
#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";

	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "memory address str " << &str << std::endl;
	std::cout << "memory address stringPTR " << stringPTR << std::endl;
	std::cout << "memory address stringREF " << &stringREF << std::endl;

	std::cout << "value of str " << str << std::endl;
	std::cout << "value of stringPTR " << *stringPTR << std::endl;
	std::cout << "value of stringREF " << stringREF << std::endl;
	
	return (0);
}
