/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.cpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/17 14:22:01 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/08/17 17:01:07 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

#include <string>
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm()
: Form("Presidential Pardon Form", 25, 5), _target("X") {
	std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( std::string target )
: Form("Presidential Pardon Form", 25, 5), _target(target) {
	std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}


PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& ref) {
	*this = ref;
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& ref)
{
	_target = ref._target;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	if (getIsSigned() == false || executor.getGrade() > getExecutionGrade())
		throw (GradeTooLowException());
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
