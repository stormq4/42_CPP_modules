/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/17 10:52:54 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/08/17 16:33:59 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class	Form
{
	public:
		Form();
		Form(const Form& ref);
		virtual ~Form() = 0;
		Form( const std::string name, const int signGrade, const int excuteGrade);
		
		std::string getName() const;
		bool		getIsSigned() const;
		int			getSignedGrade() const;
		int			getExecutionGrade() const;
		
		void					beSigned( const Bureaucrat &ref );
		virtual void			execute(Bureaucrat const & executor) const = 0;
	
		class GradeTooHighException : public std::exception {
			public:
				GradeTooHighException();
		};

		class GradeTooLowException : public std::exception {
			public:
				GradeTooLowException();
		};
		
	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_signGrade;
		const int			_executeGrade;
		
		Form& operator=(const Form& ref);

};

std::ostream &operator<<(std::ostream &os, const Form &ref);

#endif
