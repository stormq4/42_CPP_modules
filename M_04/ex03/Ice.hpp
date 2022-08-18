#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class	Ice : public AMateria {
	public:
		Ice();
		Ice(const Ice& ref);
		Ice& operator=(const Ice& ref);
		virtual ~Ice();

		std::string const & getType() const;
		Ice* clone() const;
		void use(ICharacter& target);
};

#endif
