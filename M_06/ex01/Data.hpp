/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Data.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/23 10:13:04 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/08/23 11:49:02 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

#include <iostream>
#include <string>

class Data {
	public:
		Data();
		~Data();
		Data(const Data &ref);
		Data &operator=(const Data &ref);
		
		void printData();

	private:
		uint		_hallo;
		std::string	_test;
};

uintptr_t	serialize(Data *ptr);
Data*		deserialize(uintptr_t raw);

#endif
