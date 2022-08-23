/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/23 16:46:48 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/08/23 16:46:49 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class	Intern 
: public PresidentialPardonForm, public RobotomyRequestForm, public ShrubberyCreationForm {
	
	public:
		Intern();
		Intern(const Intern& ref);
		Intern& operator=(const Intern& ref);
		~Intern();

		Form *makeForm(std::string formType, std::string name);

		Form	*getPresidentialPardonForm(std::string name);
		Form	*getRobotomyRequestForm(std::string name);
		Form	*getShrubberyCreationForm(std::string name);

};

#endif
