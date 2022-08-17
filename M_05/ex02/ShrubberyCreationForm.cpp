/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.cpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/17 14:22:35 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/08/17 17:30:29 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

#include <string>
#include <iostream>
#include <fstream>


ShrubberyCreationForm::ShrubberyCreationForm()
: Form("Shrubbery Creation Form", 145, 137), _target("X") {
	std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target )
: Form("Shrubbery Creation Form", 145, 137), _target(target) {
	std::cout << "ShrubberyCreationForm target constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& ref)
{
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
	*this = ref;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& ref)
{
	_target = ref._target;
	std::cout << "ShrubberyCreationForm copy assignment called" << std::endl;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
	
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
	if (getIsSigned() == false || executor.getGrade() > getExecutionGrade())
		throw (GradeTooLowException());
	
	std::string fileName = _target + "_shruberry";
	std::ofstream file(fileName);

	for (int i = 0; i < 3; i++){
		file << "                                  # #### ####" << std::endl;
		file << "                                ### \\/#|### |/####" << std::endl;
		file << "                               ##\\/#/ \\||/##/_/##/_#" << std::endl;
 		file << "                             ###  \\/###|/ \\/ # ###" << std::endl;
		file << "                           ##_\\_#\\_\\## | #/###_/_####" << std::endl;
		file << "                          ## #### # \\ #| /  #### ##/##" << std::endl;
		file << "                           __#_--###`  |{,###---###-~" << std::endl;
		file << "                                     \\ }{" << std::endl;
		file << "                                      }}{" << std::endl;
		file << "                                      }}{" << std::endl;
		file << "                                      {{}" << std::endl;
		file << "                                , -=-~{ .-^- _" << std::endl;
		file << "                                      `}\n\n" << std::endl;
    }
	file.close();
}
