/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/16 16:01:52 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/08/16 17:18:28 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <string>
#include <iostream>

int main()
{
	try
	{
		Bureaucrat Henkie("Henkie", 149);
		Henkie.increment();
		std::cout << Henkie.getGrade() << std::endl;
		Henkie.decrement();
		Henkie.decrement();
		std::cout << Henkie.getGrade() << std::endl;
		Henkie.decrement();
	}
	catch(const std::exception& e)
	{
		// std::cerr << e.what() << '\n';
	}
	std::cout << "-------------------------" << std::endl;
	try
	{
		Bureaucrat Henkie("Henkie", 149);
		Henkie.increment();
		std::cout << Henkie.getGrade() << std::endl;
		Henkie.decrement();
		Henkie.decrement();
		std::cout << Henkie << std::endl;
		std::cout << Henkie.getGrade() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "-------------------------" << std::endl;
	try
	{
		Bureaucrat Henkie;
		std::cout << Henkie.getGrade() << std::endl;
		Henkie.decrement();
		Henkie.decrement();
		std::cout << Henkie << std::endl;
		std::cout << Henkie.getGrade() << std::endl;
	}
	catch(const std::exception& e)
	{
		
	}
	std::cout << "-------------------------" << std::endl;

	try
	{
		Bureaucrat Henkie("Ubercrat", 1);
		std::cout << Henkie.getGrade() << std::endl;
		Henkie.increment();
		Henkie.decrement();
		std::cout << Henkie << std::endl;
		std::cout << Henkie.getGrade() << std::endl;
	}
	catch(const std::exception& e)
	{

	}
	
	
}
