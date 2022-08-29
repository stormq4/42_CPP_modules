/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   easyfind.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: stormdequay <stormdequay@student.codam.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/25 08:59:35 by stormdequay   #+#    #+#                 */
/*   Updated: 2022/08/29 17:01:44 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdexcept>
#include <iostream>
#include <algorithm>

template <typename T> typename T::iterator	easyfind(T container, int findMe) {
	return std::find(container.begin(), container.end(), findMe);
}
