/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sed.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/11 16:03:29 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/07/11 17:53:58 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed(std::string fName, std::string s1, std::string s2)
{
	this->filename = fName;
	this->s1 = s1;
	this->s2 = s2;
}

void	Sed::manipulateLine( std::string line, std::ofstream out)
{
	// std::string	newLine;

	out << line;
}

void	Sed::readFile( void )
{
	std::string	replaceFile = filename.append(".replace");
	std::string		line;
	std::ifstream	in;
	std::ofstream	out;
	std::string		tmp;

	in.open(filename);
	out.open(replaceFile);
	while(in.good())
	{
		getline(in, line);
		out << line;
	}
	in.close();
	out.close();
}

Sed::~Sed( void )
{
	return ;
}
