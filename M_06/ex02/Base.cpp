/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Base.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/23 13:30:52 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/08/23 14:14:00 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::Base(){}
A::A(){}
B::B(){}
C::C(){}

Base::~Base(){}
A::~A(){}
B::~B(){}
C::~C(){}

Base	*generate(void) {
	int	i = rand() % 3;
	switch (i) {
		case 0:
			return reinterpret_cast<Base*>(new A);
			break ;
		case 1:
			return reinterpret_cast<Base*>(new B);
			break;
		case 2:
			return reinterpret_cast<Base*>(new C);
			break ;
		default:
			return nullptr;
	}
}

void	identify(Base* p) {
	A *a = dynamic_cast<A*>(p);
	if (a) {
		std::cout << "A" << std::endl;
		return ;
	}
	B *b = dynamic_cast<B*>(p);
	if (b) {
		std::cout << "B" << std::endl;
		return ;
	}
	C *c = dynamic_cast<C*>(p);
	if (c) {
		std::cout << "C" << std::endl;
		return ;
	}
	std::cout << "nothing!" << std::endl;
}

void	identify(Base& p) {
	try {
		A a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch (const std::exception& e) {
		try {
			B b = dynamic_cast<B&>(p);
			std::cout << "B" << std::endl;
		}
		catch (const std::exception &e) {
			try {
				C c = dynamic_cast<C&>(p);
				std::cout << "C" << std::endl;
			}
			catch (const std::exception& e){
				std::cout << "nothing!" << std::endl;
			}
		}
	}
}
