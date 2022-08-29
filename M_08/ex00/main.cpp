/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: stormdequay <stormdequay@student.codam.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/25 09:07:28 by stormdequay   #+#    #+#                 */
/*   Updated: 2022/08/29 16:42:43 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <string>
#include <array>
#include <vector>

int main() {
	try	{
		std::cout << "--------TEST 1--------\n";
		std::array<int, 15> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
		for (int i = 0; i < static_cast<int>(arr.size()); i++) {
			std::cout << "index " << i << " at " << arr[i]<< "\n";
		}
		std::cout << *::easyfind(arr, 13) << std::endl;
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	try	{
		std::cout << "--------TEST 1.2--------\n";
		std::array<int, 15> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
		for (int i = 0; i < static_cast<int>(arr.size()); i++) {
			std::cout << "index " << i << " at " << arr[i]<< "\n";
		}
		std::cout << ::easyfind(arr, 200) << std::endl;
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	try	{
		std::cout << "--------TEST 1.3--------\n";
		std::array<int, 15> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
		for (int i = 0; i < static_cast<int>(arr.size()); i++) {
			std::cout << "index " << i << " at " << arr[i]<< "\n";
		}
		std::cout << ::easyfind(arr, 15) << std::endl;
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	try	{
		std::cout << "\n--------TEST 2--------\n";
		std::vector<int> arr;
		for (int i = 0; i < 15; i++) {
			arr.push_back(i + 1);
			std::cout << "index " << i << " at " << arr[i] << "\n";
		}
		std::cout << *::easyfind(arr, 0) << std::endl;
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
