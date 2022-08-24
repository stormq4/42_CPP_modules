/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/24 11:55:01 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/08/24 16:01:49 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdexcept>
#include <iostream>

template <typename T> class Array {
	public:
		Array():_size(0), _elements(nullptr) {}

		Array(unsigned int n): _size(static_cast<int>(n)){
			_elements = new T[n];
		}

		~Array(){
			delete[] _elements;
		}

		int size() const{ 
			return _size;
		}

		Array(const Array &ref) {
			*this = ref;
		}

		Array &operator=(const Array &ref) {
			this->_size = ref.size();
			this->_elements = new T[_size];
			for (int i = 0; i < _size; i++) {
				this->_elements[i] = ref._elements[i];
			}
			return *this;
		}

		class OutOfBoundException : public std::exception {
			public:
				virtual const char* what() const throw(){
					return "Array out of bound";
				};
		};
		
		T &operator[](int i) {
			if (i >= this->size() || i < 0) {
				throw OutOfBoundException();
			}
			return _elements[i];
		}

	private:
		int				_size;
		T				*_elements;
		
};
