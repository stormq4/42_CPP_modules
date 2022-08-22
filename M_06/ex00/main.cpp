/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/22 13:37:01 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/08/22 14:00:33 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

int main(int argc, char **argv) {
	if (argc == 1)
		return 0;
	Scalar convert(static_cast<std::string>(argv[1]));

	
	return 0;
}
