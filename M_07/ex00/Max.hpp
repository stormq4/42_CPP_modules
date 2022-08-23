/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Max.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/23 16:46:34 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/08/23 16:53:30 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAX_HPP
# define MAX_HPP

template <typename T> T max(T a, T b){
	if (a > b)
		return a;
	return b;
}

#endif
