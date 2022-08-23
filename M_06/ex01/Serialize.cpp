/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   serialize.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/23 10:25:44 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/08/23 11:57:06 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t	serialize(Data* ptr) {
	uintptr_t cast;
	cast = reinterpret_cast<uintptr_t>(ptr);
	return cast;
}

Data*	deserialize(uintptr_t raw) {
	Data *cast;
	cast = reinterpret_cast<Data*>(raw);
	return cast;
}
