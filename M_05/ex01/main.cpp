/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/16 16:01:52 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/08/17 14:10:14 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <string>
#include <iostream>

int main()
{
	std::cout << "--CORRECT & FALSE TESTS---" << std::endl;
	try
	{
		Bureaucrat Henkie("Henkie", 42);
		Form	Formpje("FORM!!", 55, 55);
		Formpje.beSigned(Henkie);
		Henkie.signForm(Formpje);
		Form	Test("Test", 41, 30);
		Henkie.signForm(Test);
		Form	Nope("Nope", 41, 150);
		Nope.beSigned(Henkie);
	}
	catch(const std::exception& e)
	{
		
	}
	std::cout << std::endl << "--DEFAULT & OVERLOADER ---" << std::endl;
	try 
	{	
		Form i;
		std::cout << i << std::endl;
		Form j(i);
		std::cout << j << std::endl;
		
	}
	catch(const std::exception& e)
	{
		
	}
	
}
