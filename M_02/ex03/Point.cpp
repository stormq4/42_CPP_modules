/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Point.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/13 18:15:07 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/07/13 18:41:13 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ):x(0), y(0){return ;}

// std::ostream & operator<<(std::ostream &os, Point const &point){
// 	os << point.x;
// 	return (os);
// }

Point::~Point( void ) {return;}

Point::Point( Fixed xNew, Fixed yNew):x(xNew), y(yNew) {return;}

Point::Point( const Point &origin ) {
	*this = origin;
}

Point	&Point::operator=( const Point &duplicate ) {
	y = duplicate.y;
	return *this;
}
// https://stackoverflow.com/questions/2049582/how-to-determine-if-a-point-is-in-a-2d-triangle