/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/26 10:41:17 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/08/26 11:39:30 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <vector>
#include <exception>
#include "Span.hpp"

int main() {
	{
		std::cout << "------------TEST 1---------------\n";
		Span test;
		test.addManyNumbers(1000);
	}
	{
		std::cout << "\n\n------------TEST 2---------------\n";
		Span test(10000);
		test.addManyNumbers(100);
		for (int i = 0; i < (test.size()); i++) {
			std::cout << test[i] << " --> at index " << i << "\n";
		}
		std::cout << "shortest span  -> " << test.shortestSpan() << '\n';
		std::cout << "longest span  -> " << test.longestSpan() << '\n';
	}
	{
		std::cout << "\n\n------------TEST 3---------------\n";
		Span test(10000);
		test.addManyNumbers(10001);
	}
	{
		std::cout << "\n\n------------TEST 4---------------\n";
		Span test(10000);
		test.addNumber(100);
		for (int i = 0; i < (test.size()); i++) {
			std::cout << test[i] << " --> at index " << i << "\n";
		}
		std::cout << "shortest span  -> " << test.shortestSpan() << '\n';
		std::cout << "longest span  -> " << test.longestSpan() << '\n';
	}
	{
		std::cout << "\n\n------------TEST 5---------------\n";
		Span test(10000);
		for (int i = 0; i < 100; i++){
			test.addNumber(i + 100);
		}
		for (int i = 0; i < test.size(); i++) {
			std::cout << test[i] << " --> at index " << i << "\n";
		}
		std::cout << "shortest span  -> " << test.shortestSpan() << '\n';
		std::cout << "longest span  -> " << test.longestSpan() << '\n';
	}
	{
		std::cout << "\n\n------------TEST 6---------------\n";
		Span test(10000);
		for (int i = 0; i < 10; i++){
			test.addManyNumbers(1001);
		}
		std::cout << "shortest span  -> " << test.shortestSpan() << '\n';
		std::cout << "longest span  -> " << test.longestSpan() << '\n';
	}
	
	return 0;
}
