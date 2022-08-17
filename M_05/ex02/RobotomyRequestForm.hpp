#ifndef ROBOTOMY_REQUEST_FORM_HPP
# define ROBOTOMY_REQUEST_FORM_HPP
#include "Form.hpp"

class	RobotomyRequestForm : public Form 
{
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm& ref);
		RobotomyRequestForm& operator=(const RobotomyRequestForm& ref);
		~RobotomyRequestForm();
		RobotomyRequestForm( std::string target );

		void	execute(Bureaucrat const & executor) const;
	
	private:
		std::string	_target;
};

#endif
