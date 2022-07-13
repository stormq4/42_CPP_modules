/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Point.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/13 18:06:46 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/07/13 18:36:03 by sde-quai      ########   odam.nl         */
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
		Point &operator=( const Point &duplicate );

	private:
		const Fixed x;
		Fixed const y;	
};

std::ostream & operator<<( std::ostream &os, const Point &floatConv );
bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif