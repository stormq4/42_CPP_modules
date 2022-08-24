/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/24 10:42:48 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/08/24 15:12:14 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <string>
#include <iostream>

void	testFunction(std::string &str) {
	str = "XXXXXX";
}

template <typename T> void swap(T &s1, T &s2) {
	T swap = s1;
	s1 = s2;
	s2 = swap;
}

template <typename T> void	newFuntion(T hallo) {
	::swap(hallo[0], hallo[1]);
}

int main() {
	
	std::cout << "------INITIAL FUNCTION-------" << std::endl;
	std::string stringetje[4];
	stringetje[0] = "hallo";
	stringetje[1] = "blabla";
	stringetje[2] = "koekjes";
	stringetje[3] = "geiten";
	for (int i = 0; i < 4; i++) {
		std::cout << stringetje[i] << std::endl;
	}
	std::cout << "\n\n------AFTER TEST-------\n" << std::endl;
	::iter(stringetje, 4, testFunction);
	for (int i = 0; i < 4; i++) {
		std::cout << stringetje[i] << std::endl;
	}
	
	int array[3][2];
	array[0][0] = 9;
	array[0][1] = 5;
	array[1][0] = 2;
	array[1][1] = 9000;
	array[2][0] = -90000;
	array[2][1] = -7323;
	
	std::cout << "\n\n------INITIAL FUNTION TEMPLATE-------" << std::endl;
	for (int i = 0; i < 3; i++) {
		std::cout << "first \t\t" << array[i][0] << " | second \t\t" << array[i][1] << std::endl;
	}
	std::cout << "\n\n------AFTER TEST-------\n" << std::endl;
	
	::iter(array, 3, ::newFuntion<int*>);
	for (int i = 0; i < 3; i++) {
		std::cout << "first \t\t" << array[i][0] << " | second \t\t" << array[i][1] << std::endl;
	}

	return 0;
}
