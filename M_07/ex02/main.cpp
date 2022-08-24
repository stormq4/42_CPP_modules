/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/24 11:54:59 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/08/24 16:13:31 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <string>
#include <iostream>

int	main() {
	try {
		Array<int> arr(50);
		
		for (int i = 0; i < arr.size(); i++) {
			arr[i] = i * i;
		}
		for (int i = 0; i < arr.size(); i++) {
			std::cout << i << " --> " << arr[i] << std::endl;
		}
		arr[51];
	} catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n------------------------\n";
	try	{
		Array<std::string> arr(20);
		
		for (int i = 0; i < arr.size(); i++) {
			arr[i] = "halloooo";
		}
		for (int i = 0; i < arr.size(); i++) {
			std::cout << i << " --> " << arr[i] << std::endl;
		}
		arr[-1];
		Array<std::string> copyArray = arr;
		for (int i = 0; i < copyArray.size(); i++) {
			std::cout << i << " --> " << copyArray[i] << std::endl;
		}
	} catch(const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}

