/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/12 11:02:26 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/07/12 11:20:12 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl Karen;

	if (argc == 1)
		return(1);
	Karen.complain((std::string)argv[1]);
	return(0);
}
