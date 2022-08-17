/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/16 16:01:52 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/08/17 17:28:12 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <string>
#include <iostream>

int main()
{
	std::cout << "--CORRECT & FALSE TESTS---" << std::endl;
	try
	{
		Bureaucrat Henkie("Henkie", 42);
		ShrubberyCreationForm permit("Rooftop bar permit");
		permit.beSigned(Henkie);
		permit.execute(Henkie);
		Henkie.executeForm(permit);
	}
	catch(const std::exception& e) {
		
	}	
	
}
