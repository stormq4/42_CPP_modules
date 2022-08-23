/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/23 13:56:58 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/08/23 14:16:21 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main() {
	for (int i = 0; i < 10; i++){
		std::cout << "----TEST " << i << "----" << std::endl;
		Base * test = generate();
		identify(test);
		identify(*test);	
		delete test;
		std::cout << "\\n";
	}
}
