/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/21 09:55:09 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/04/21 15:10:56 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	UpperCaseString(char *Str)
{
	for (; *Str; Str++)
		if (!(*Str < 'a' || *Str > 'z'))
			*Str = std::toupper(*Str);
}

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		for (int i = 1; i < argc; i++)
		{
			UpperCaseString(argv[i]);
			std::cout << argv[i];
		}
	std::cout << std::endl;
	return (0);
}