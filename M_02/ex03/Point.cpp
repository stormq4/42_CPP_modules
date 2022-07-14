/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Point.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/13 18:15:07 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/07/14 14:02:55 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ):x(0), y(0){}

Point::~Point( void ){}

Point::Point( Fixed xNew, Fixed yNew):x(xNew), y(yNew) {}

Point::Point( const Point &origin ):x(origin.x), y(origin.y) {}

Point	&Point::operator=( const Point &duplicate ) {
	(void)duplicate;
	return *this;
}

Fixed	Point::xReturn( void ) const { return (x);}
Fixed	Point::yReturn( void ) const { return (y);}

float	assignPosition(const Point p, const Point sideOne, const Point sideTwo){
	Fixed nr((p.xReturn() - sideTwo.xReturn()) * (sideOne.yReturn() - sideTwo.yReturn()) \
	- (sideOne.xReturn() - sideTwo.xReturn()) * (p.yReturn() - sideTwo.yReturn()));
	return (nr.toFloat());
}

bool bsp( Point const a, Point const b, Point const c, Point const point) {
	float	dp1, dp2, dp3;
	bool	neg, pos;

	dp1 = assignPosition(point, a, b);
	dp2 = assignPosition(point, b, c);
	dp3 = assignPosition(point, c, a);

	neg = (dp1 <= 0) || (dp2 <= 0) || (dp3 <= 0);
	pos = (dp1 >= 0) || (dp2 >= 0) || (dp3 >= 0);

	return !(neg && pos);
}
