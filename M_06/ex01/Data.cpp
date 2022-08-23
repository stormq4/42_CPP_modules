/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Data.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/23 10:18:54 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/08/23 11:49:57 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data()
: _hallo(900), _test("hallo") {
	std::cout << "default constructor Data" << std::endl;
}

Data::~Data(){
	std::cout << "destructor Data" << std::endl;
}

Data::Data(const Data &ref) {
	std::cout << "copy constructor Data" << std::endl;
	*this = ref;
}

Data &Data::operator=(const Data &ref) {
	std::cout << "copy assignment Data" << std::endl;
	_hallo = ref._hallo;
	_test = ref._test;
	return *this;
}

void	Data::printData() {
	std::cout << _hallo << " - " << _test << std::endl;
}
