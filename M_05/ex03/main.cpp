/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/16 16:01:52 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/08/22 11:44:43 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <string>
#include <iostream>

int main()
{
	Intern HumanFurnature;
	Form *rrf =	HumanFurnature.makeForm("lala request", "henkie");

	std::cout << "--------------------" << std::endl;
	// rrf = HumanFurnature.makeForm("robotomy request", "yenkis");			
	rrf = HumanFurnature.makeForm("presidential pardon", "poepieman");

	Bureaucrat MariaMatic("MarioMatic", 1);
	rrf->beSigned(MariaMatic);
	MariaMatic.signForm(*rrf);
	rrf->execute(MariaMatic);
	// system("leaks Intern");
	return (0);
}
