#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <stdexcept>

class	Bureaucrat
{
	public:
		Bureaucrat( void );
		Bureaucrat(const Bureaucrat& ref);
		Bureaucrat(const std::string name, const int grade);
		~Bureaucrat( void );
		

		class GradeTooHighException : public std::exception {
			public:
				GradeTooHighException();
		};

		class GradeTooLowException : public std::exception{ 
			public:
				GradeTooLowException();
		};
		
		std::string	getName() const;
		int			getGrade() const;
		void		increment();
		void		decrement();

	private:
		const std::string	_name;
		int					_grade;
		Bureaucrat&	operator=(const Bureaucrat& ref );
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &ref);

#endif
