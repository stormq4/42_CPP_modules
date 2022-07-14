/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Point.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/13 18:06:46 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/07/14 12:21:43 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point{
	public:
		Point( void );
		~Point( void );
		Point( Fixed x, Fixed y);
		Point( const Point &origin );
		Point	&operator=( const Point &duplicate );

		Fixed	xReturn(void) const;
		Fixed	yReturn(void) const;

	private:
		const Fixed x;
		const Fixed y;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
