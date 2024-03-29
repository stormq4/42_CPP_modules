/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Scalar.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/22 12:00:07 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/08/23 10:11:16 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_HPP
# define SCALAR_HPP

#include <iostream>
#include <string>

class Scalar {
	public:
		Scalar();
		~Scalar();
		Scalar(const Scalar &ref);
		Scalar &operator=(const Scalar &ref);
		Scalar(std::string input);

		void	convertLiterals();
		void	displayLiterals( long double x );

	private:
		std::string	_input;
};

#endif
