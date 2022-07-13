/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/12 13:37:03 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/07/12 14:58:00 by sde-quai      ########   odam.nl         */
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
		
		Fixed	&operator=( const Fixed &duplicate );
		
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		
	private:
		int					_fixedPointNr;
		static const int	_fractionalBits = 8;
} ;

#endif
