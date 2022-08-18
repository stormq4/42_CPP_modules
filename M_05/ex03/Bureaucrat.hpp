/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/17 11:52:27 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/08/17 15:46:17 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <stdexcept>

#include "Form.hpp"

class Form;

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
		void		signForm( const Form &ref );
		void		executeForm( Form const &form );

	private:
		const std::string	_name;
		int					_grade;
		Bureaucrat&	operator=(const Bureaucrat& ref );
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &ref);

#endif
