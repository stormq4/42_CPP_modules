/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MutantStack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/26 11:54:03 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/08/29 17:03:23 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stack>

template <typename T> 
class MutantStack : public std::stack<T> {
	public:
		typedef T* iterator;
	
		MutantStack(){}
		~MutantStack(){}
		MutantStack(const MutantStack &ref) {
			*this = ref;
		}
		MutantStack &operator=(const MutantStack &ref) {
			*this = ref;
			return *this;
		}
		
		iterator	begin() {
			iterator it = &this->top();
			for (size_t i = 0; i < this->size() - 1; i++) {
				it--;
			}
			return it;
		}

		iterator	end() {
			return (&this->top() + 1);
		}
	
};
