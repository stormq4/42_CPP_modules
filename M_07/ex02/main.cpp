/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/24 11:54:59 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/08/29 10:23:38 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <string>
#include <iostream>

#define MAX_VAL 750

int	main() {
	{
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
	}
	std::cout << "\n------------------------\n";
	{
		try	{
			Array<std::string> arr(20);
			
			for (int i = 0; i < arr.size(); i++) {
				arr[i] = "halloooo";
			}
			for (int i = 0; i < arr.size(); i++) {
				std::cout << i << " --> " << arr[i] << std::endl;
			}
			arr[-1]; // should fail
			Array<std::string> copyArray = arr;
			for (int i = 0; i < copyArray.size(); i++) {
				std::cout << i << " --> " << copyArray[i] << std::endl;
			}
		} catch(const std::exception& e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "\n\n------------------------\n";
	std::cout << "\n--------main.cpp in subject-------\n";
	{
		Array<int> numbers(MAX_VAL);
		int* mirror = new int[MAX_VAL];
		srand(time(NULL));
		for (int i = 0; i < MAX_VAL; i++)
		{
			const int value = rand();
			numbers[i] = value;
			mirror[i] = value;
		}
		//SCOPE
		{
			Array<int> tmp = numbers;
			Array<int> test(tmp);
		}

		for (int i = 0; i < MAX_VAL; i++)
		{
			if (mirror[i] != numbers[i])
			{
				std::cerr << "didn't save the same value!!" << std::endl;
				return 1;
			}
		}
		try
		{
			numbers[-2] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			numbers[MAX_VAL] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		for (int i = 0; i < MAX_VAL; i++)
		{
			numbers[i] = rand();
		}
		delete [] mirror;//
	}
	return 0;
}
