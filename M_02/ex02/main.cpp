/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/12 14:20:27 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/07/13 17:55:06 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << Fixed( 5.05f ) * Fixed( 2 ) << std::endl;

	Fixed hai( 117.002f );
	Fixed bai( 5 );
	std::cout << hai / bai << std::endl;
	std::cout << hai - bai << std::endl;
	std::cout <<hai + bai << std::endl;
	
	return 0;
}
