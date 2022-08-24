/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   iter.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/24 10:34:36 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/08/24 14:28:50 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template <typename T, typename U, typename V> void iter(T *arr, U len, V func) {
	for (U i = 0; i < len; i++) {
		func(arr[i]);
	}
}

#endif
