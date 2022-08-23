/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Swap.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/23 16:46:59 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/08/23 16:56:15 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SWAP_HPP
# define SWAP_HPP

template <typename T> void swap(T &s1, T &s2) {
	T swap = s1;
	s1 = s2;
	s2 = swap;
}

#endif
