/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: stormdequay <stormdequay@student.codam.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/25 09:07:28 by stormdequay   #+#    #+#                 */
/*   Updated: 2022/08/25 09:35:11 by stormdequay   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <string>
#include <vector>

using namespace std;

int main() {
	
	{
		cout << "--------TEST 1--------'\n";
		vector<int> array;
		cout << "\tinside array:\n";
		for (int i = 0; i < 15; i++) {
			array.push_back(i);
			cout << array[i] << endl;
		}
		// for () {
		// 	cout << num << endl;
		// }
	}
	
	return 0;
}
