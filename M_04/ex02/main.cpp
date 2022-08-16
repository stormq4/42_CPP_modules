/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/04 11:50:15 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/08/16 13:41:12 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	// delete j;//should not create a leak
	// delete i
	
	const Cat* i = new Cat();
	Animal* j = new Dog();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << "-------------" <<std::endl;
	i->makeSound();
	std::cout << "-------------" <<std::endl;
	j->makeSound();
	std::cout << "-------------" <<std::endl;
	const Cat *kat = new Cat( *i );
	const Cat *kitty = kat;
	kat->makeSound();
	std::cout << kitty->getType() << std::endl;
	std::cout << "------fff-------" << std::endl;
	
	
	delete i;
	delete j;
	delete kat;
	
	std::cout << "-------fff------" << std::endl;
	
	Animal *zoo[10];
	for(int i = 0; i < 10; i++) {
		if (i % 2)
			zoo[i] = new Cat;
		else
			zoo[i] = new Dog;
	}
	Brain *inside = zoo[0]->getBrain();
	inside->_ideas[0] = "halloo ik ben een Frenkie";
	inside->_ideas[9] = "ik hou van kaaaas";

	Animal *tmp = zoo[0];
	zoo[0] = zoo[1];
	zoo[1] = tmp;

	inside = zoo[1]->getBrain();
	std::cout << "\n\ntestst -->" << inside->_ideas[0] << "  " << inside->_ideas[9] << std::endl;
	for (int i = 0; i < 10; i++) {
		std::cout << zoo[i]->getType() << std::endl;
	}
	for (int i = 0; i < 10; i++) {
		delete zoo[i];
	}
	// std::cout << "halllooooo test "  << std::endl;
	// Animal test;
	// system("leaks Brain");
	return (0);
}
