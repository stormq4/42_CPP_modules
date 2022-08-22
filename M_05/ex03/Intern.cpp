/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 10:36:29 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/08/22 11:33:04 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

#include <string>
#include <iostream>

Intern::Intern() {
	std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(const Intern& ref) {
	std::cout << "Intern copy constructor called" << std::endl;
	*this = ref;
}

Intern&	Intern::operator=(const Intern& ref) {
	std::cout << "Intern copy assignment called" << std::endl;
	(void)ref;
	return *this;
}

Intern::~Intern() {
	std::cout << "Intern destructor called" << std::endl;\
}

Form 	*Intern::makeForm(std::string formType, std::string name) {
	
	Form* (Intern::*createForms[])(std::string) = {
		&Intern::getShrubberyCreationForm,
		&Intern::getRobotomyRequestForm,
		&Intern::getPresidentialPardonForm
	};
	
	std::string type[] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};
	
	for (int i = 0; i < 3; i++){
		if (formType.compare(type[i]) == 0)
		{
			std::cout << "-----" << "Intern creates " << type[i] << "-----" << std::endl;
			return (this->*createForms[i])(name);
		}
	}
	std::cout << "Form " << formType << " does not exist" << std::endl;
	return NULL;
}

Form	*Intern::getShrubberyCreationForm( std::string name ){
	Form *newForm = new ShrubberyCreationForm(name);
	return (newForm);
}

Form	*Intern::getRobotomyRequestForm( std::string name ){
	Form *newForm = new RobotomyRequestForm(name);
	return (newForm);
}

Form	*Intern::getPresidentialPardonForm( std::string name ){
	Form *newForm = new PresidentialPardonForm(name);
	return (newForm);
}
