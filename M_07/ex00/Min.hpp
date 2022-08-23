/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Min.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/23 16:48:52 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/08/23 16:52:42 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MIN_HPP
# define MIN_HPP

template <typename T> T min(T a, T b){
	if (a < b)
		return a;
	return b;
}

#endif
