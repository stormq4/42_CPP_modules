/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/12 13:37:03 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/07/13 17:02:36 by sde-quai      ########   odam.nl         */
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
		bool	operator>( const Fixed &A ) const;
		bool	operator<( const Fixed &A ) const;
		bool	operator>=( const Fixed &A ) const;
		bool	operator<=( const Fixed &A ) const;
		bool	operator==( const Fixed &A ) const;
		bool	operator!=( const Fixed &A ) const;
		Fixed	operator+( const Fixed &A ) const;
		Fixed	operator-( const Fixed &A ) const;
		Fixed	operator*( const Fixed &A ) const;
		Fixed	operator/( const Fixed &A ) const;
		Fixed	&operator++( void );
		Fixed	&operator--( void );
		Fixed	operator++( int );
		Fixed	operator--( int );
		
		static Fixed		&min( Fixed &first, Fixed &second );
		static const Fixed	&min( const Fixed &first, const Fixed &second );
		static Fixed		&max( Fixed &first, Fixed &second );
		static const Fixed	&max( const Fixed &first, const Fixed &second );

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
		
	private:
		int					_fixedPointNr;
		static const int	_fractionalBits = 8;
};
		
std::ostream & operator<<( std::ostream &os, const Fixed &floatConv );
int	powerFunctionInt( int ground, int power );

#endif
