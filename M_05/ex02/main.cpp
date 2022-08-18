/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/16 16:01:52 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/08/18 10:02:35 by sde-quai      ########   odam.nl         */
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
	std::cout << "--ShrubberyCreationForm TESTS---" << std::endl;
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
	std::cout << "--ShrubberyCreationForm false TESTS---" << std::endl;
	try
	{
		Bureaucrat Henkie("Henkie", 42);
		ShrubberyCreationForm permit("Rooftop bar permit");
		permit.execute(Henkie);
		Henkie.executeForm(permit);
	}
	catch(const std::exception& e) {
		
	}
	std::cout << "\n--RobotomyRequestForm false TESTS---\n" << std::endl;
	try
	{
		Bureaucrat Henkie("Henkie", 70);
		RobotomyRequestForm permit("Robotomy Request");
		permit.beSigned(Henkie);
		permit.execute(Henkie);
		Henkie.executeForm(permit);
	}
	catch(const std::exception& e) {
		
	}
	std::cout << "\n--RobotomyRequestForm TESTS---\n" << std::endl;
	try
	{
		Bureaucrat Henkie("Henkie", 70);
		Bureaucrat MrMayor("Mr Mayor", 41);
		std::cout << "Henkie --> " << Henkie << std::endl << "mr Mayor --> " << MrMayor <<std::endl;
		RobotomyRequestForm permit("Robotomy Request");
		permit.beSigned(Henkie);
		permit.execute(MrMayor);
		MrMayor.executeForm(permit);
	}
	catch(const std::exception& e) {
		
	}
	std::cout << "\n--Presidential pardon TESTS---\n" << std::endl;
	try
	{
		Bureaucrat MrPres("Mr Pres", 1);
		Bureaucrat MrMayor("Mr Mayor", 24);
		std::cout << "mr President --> " << MrPres << std::endl << "mr Mayor --> " << MrMayor <<std::endl;
		PresidentialPardonForm permit("Beetlejuice");
		permit.beSigned(MrMayor);
		permit.execute(MrPres);
		MrMayor.executeForm(permit);
	}
	catch(const std::exception& e) {
		
	}
}
