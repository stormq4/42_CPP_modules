/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/02 16:54:14 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/08/04 16:41:06 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {
		public:
			WrongCat( void );
			~WrongCat( void );
			WrongCat( const WrongCat &origin);

			WrongCat	&operator=( const WrongCat &dup );

			void	makeSound( void ) const;
		
};

#endif
