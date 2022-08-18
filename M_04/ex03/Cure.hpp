/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 14:02:28 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/08/18 16:04:35 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class	Cure : public AMateria
{
	public:
		Cure();
		Cure(const Cure& ref);
		Cure& operator=(const Cure& ref);
		~Cure();

		std::string const & getType() const;
		Cure* clone() const;
		void use(ICharacter& target);
};

#endif
