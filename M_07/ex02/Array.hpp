/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/24 11:55:01 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/08/29 11:20:29 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <stdexcept>
#include <iostream>

template <typename T> class Array {
	public:
		Array():_size(0), _elements(NULL) {}

		Array(unsigned int n): _size(n){
			_elements = new T[n]();
		}

		~Array(){
			if (_elements)
				delete[] _elements;
		}

		unsigned int size() const { 
			return _size;
		}

		Array(const Array &ref): _elements(NULL) {
			*this = ref;
		}

		Array &operator=(const Array &ref) {
			this->_size = ref.size();
			if (_elements)
				delete [] _elements ;
			this->_elements = new T[_size]();
			for (int i = 0; i < static_cast<int>(_size); i++) {
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
			if (i >= static_cast<int>(this->size()) || i < 0) {
				throw OutOfBoundException();
			}
			return _elements[i];
		}

	private:
		unsigned int	_size;
		T				*_elements;

};

#endif
