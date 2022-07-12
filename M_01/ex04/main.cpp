/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/11 16:21:29 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/07/12 08:28:54 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int main(int argc, char **argv)
{
	if (argc != 4)
		return (1);
	Sed replace((std::string)argv[1], (std::string)argv[2], (std::string)argv[3]);
	replace.readFile();
}
