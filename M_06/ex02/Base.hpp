/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Base.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/23 13:17:53 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/08/23 14:09:58 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>
#include <string>

class Base;

class Base {
	public:
		Base();
		virtual ~Base();
};

class A : public Base { 
	public:
		A();
		~A(); 
};

class B : public Base { 
	public:
		B();
		~B();
};

class C : public Base { 
	public:
		C();
		~C();
};

Base	*generate(void);
void	identify(Base* p);
void	identify(Base& p);

#endif
