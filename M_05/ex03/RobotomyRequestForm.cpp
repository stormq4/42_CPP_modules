/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.cpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/17 14:22:45 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/08/17 17:24:58 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

#include <string>
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm()
: Form("Robotomy Request Form", 72, 45), _target("X") {
	std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( std::string target )
: Form("Robotomy Request Form", 72, 45), _target(target) {
	std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& ref) {
	*this = ref;
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& ref) {
	this->_target = ref._target;
	std::cout << "RobotomyRequestForm copy assignment called" << std::endl;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	if (getIsSigned() == false || executor.getGrade() > getExecutionGrade())
		throw (GradeTooLowException());
	if (rand() % 2)
		std::cout << _target << " has been robotomized" << std::endl;
	else
		std::cout << _target << " robotomy failed" << std::endl;
}
