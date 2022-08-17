/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/17 11:26:36 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/08/17 14:10:57 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

#include <string>
#include <iostream>

Form::Form()
: _name("X"), _isSigned(false), _signGrade(150), _executeGrade(150) {
	std::cout << "default Form " << _name << " with level constructor called" << std::endl;
}

Form::Form(const Form& ref)
: _signGrade(ref._signGrade), _executeGrade(ref._executeGrade) {
	std::cout << "Form copy contructor called " << _name << std::endl;
	*this = ref;
}

Form&	Form::operator=(const Form& ref) {
	std::cout << "Form copy assignment called " << _name << std::endl;
	(void)ref;
	return *this;
}

Form::Form( const std::string name, const int signGrade, const int excuteGrade) 
: _name(name), _isSigned(false) ,_signGrade(signGrade), _executeGrade(excuteGrade) {	
	if (_signGrade < 1 || _executeGrade < 1)
		throw (GradeTooHighException());
	else if (_signGrade > 150 || _executeGrade > 150)
		throw (GradeTooLowException());
	std::cout << "Form name/grade constructor called" << std::endl; 
}

Form::~Form(){
	std::cout << "Form destructor called" << std::endl;
}

std::ostream &operator<<(std::ostream &os, const Form &ref) {
	os << "Form " << ref.getName() << " - ExecutionGrade "<< ref.getExecutionGrade()  << " - isSigned  "<< ref.getIsSigned()  << " - signed grade " << ref.getSignedGrade();
	return os;
}

Form::GradeTooHighException::GradeTooHighException(){
	std::cout << "Form Grade too High exception" << std::endl;
}

Form::GradeTooLowException::GradeTooLowException(){
	std::cout << "Form Grade too Low exception" << std::endl;
}

std::string Form::getName() const {	return _name; }

bool	Form::getIsSigned() const { return _isSigned; }

int	Form::getSignedGrade() const { return _signGrade; }

int	Form::getExecutionGrade() const { return _executeGrade; }

void	Form::beSigned( const Bureaucrat &ref ){
	if (_signGrade > ref.getGrade())
		_isSigned = true;
	else
		throw(GradeTooLowException());
}
