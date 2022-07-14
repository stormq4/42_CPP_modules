/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/12 14:20:27 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/07/14 12:31:46 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void ) {
	Point A(10, 5), B(10, 10), C(5, 10), point(2, 1), newPoint(8, 8), newerPoint(90, 3.04f), nPoint(10, 10);
	
	bool check = bsp(A, B, C, point);
	std::cout << check << " point should be false" << std::endl;
	// check = bsp(A, B, C, newPoint);
	// std::cout << check << " point should be true" << std::endl;
	// check = bsp(A, B, C, newerPoint);
	// std::cout << check << " point should be false" << std::endl;
	// check = bsp(A, B, C, nPoint);
	// std::cout << check << " point should be false" << std::endl;
	return 0;
}
