/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/25 15:43:25 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/08/25 16:50:36 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <exception>

class Span {
	public:
		Span();
		Span(unsigned int N);
		// Span(const Span &ref);
		// Span	&operator=(const Span &ref);
		~Span();

		void	shortestSpan();
		void	longestSpan();
		void	addNumber(int number);
		// addManyNumbers

	private:
		const unsigned int		_N;
		std::vector<int>		_elem;
	
};