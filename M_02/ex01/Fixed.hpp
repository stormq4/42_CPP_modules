/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/12 13:37:03 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/07/13 11:45:13 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>
#include <string>

class Fixed {
	public:
		Fixed( void );
		~Fixed( void );
		Fixed( const Fixed &origin );
		Fixed( const int val );
		Fixed( const float val);
		
		Fixed	&operator=( const Fixed &duplicate );
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
		
	private:
		int					_fixedPointNr;
		static const int	_fractionalBits = 8;
} ;
		
std::ostream & operator<<(std::ostream &os, const Fixed &floatConv);
int	powerFunctionInt( int ground, int power);

#endif
