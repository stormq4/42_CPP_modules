/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   easyfind.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: stormdequay <stormdequay@student.codam.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/25 08:59:35 by stormdequay   #+#    #+#                 */
/*   Updated: 2022/08/25 09:38:05 by stormdequay   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdexcept>
#include <iostream>

template <typename T> int easyfind(T container, int find) {
	class NotInContainerException : public std::exception {
		public:
				virtual const char* what() const throw() {
					return "Not in container";
				}
	};

	(void)find;
	// for (int i = 0; i < T.size(); i++) {
	// 	if (array[i] == find) 
	// 		return array[i];
	// }
	(void)container;
	throw NotInContainerException();
	return (false);
}
