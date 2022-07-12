/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sed.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/11 16:03:29 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/07/12 09:33:10 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed(std::string fName, std::string s1, std::string s2)
{
	this->filename = fName;
	this->s1 = s1;
	this->s2 = s2;
}

void	Sed::readFile( void )
{
	std::string		line;
	std::ifstream	in(filename);
	std::ifstream	check_in(filename);
	std::ofstream	out;

	if (!in.is_open())
		return ;
	filename.append(".replace");
	out.open(filename);
	getline(check_in, line);
	while (in.good()) {
		getline(in, line, '\0');
		if (!in)
			break ;
		for (size_t i = 0; i < line.length(); i++) {
			if (line.compare(i, s1.length(), s1) == 0) {
				out << s2;
				i += s1.length() - 1;
			}
			else
				out << line[i];
		}
		// getline(check_in, line);
		// if (check_in)
		// 	out << '\n';
	}
	in.close();
	out.close();
}

Sed::~Sed( void ){	return ;}
