/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/23 11:33:50 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/08/23 11:51:06 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main() {
	Data ptr;
	std::cout << "ptr test --> uint && std::stirng --> ";
	ptr.printData();
	
	uintptr_t hallo = serialize(&ptr);
	std::cout << "test this --> " << hallo << std::endl;
	
	Data *new_ptr = deserialize(hallo);
	std::cout << "new_ptr test --> uint && std::stirng --> ";
	new_ptr->printData();

	return 0;
}
