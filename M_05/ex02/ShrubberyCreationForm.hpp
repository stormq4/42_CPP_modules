#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP
#include "Form.hpp"

class	ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm& ref);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& ref);
		~ShrubberyCreationForm();
		ShrubberyCreationForm( std::string target );

		void	execute(Bureaucrat const & executor) const;

	private:
		std::string	_target;
};

#endif
