/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/26 14:59:09 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/08/26 16:42:29 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <stack>
#include <iostream>
#include <list>

int main(){
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.top() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);

		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		std::cout << *it << " first in mstack\n";
		std::cout << *ite << " last in mstack\n";

		++it;
		--it;
		std::cout << "-----inside loop-----\n";
		while (it != ite)
		{
			std::cout << *it << " test" << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	{
		std::cout << "\n\n--------------------------\n";
		std::list<int> mstack;
		mstack.push_back(5);
		mstack.push_back(17);
		
		mstack.pop_back();
		
		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		mstack.push_back(0);
		
		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();
		std::cout << *it << " first in mstack\n";
		std::cout << *ite << " last in mstack\n";
		
		++it;
		--it;
		std::cout << "-----inside loop-----\n";
		while (it != ite)
		{
			std::cout << *it << " test" << std::endl;
			++it;
		}
	}
	return 0;
}
