#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template<typename T>
class Array {
	private :
		T *_array;
		size_t _size;

	public :
		Array<T>() {
			_array = new T();
			_size = 0;
		}

		Array<T>(unsigned int n){
			_array = new T[n];
			_size = n;
		}

		Array<T> (Array<T> const & src){
			_array = NULL;
			*this = src;
		}

        Array<T> & operator=(const Array<T> & rhs){
			if (this != &rhs){
				if (_array) { delete [] _array;}
				_size = rhs._size;
				_array = new T[_size];
				for (size_t i = 0; i < _size; i++){
					_array[i] = rhs._array[i];
				}
			}
			return *this;
		}

		virtual ~Array<T>(void){
			if (_array){ delete [] _array; }
		}

		T & operator[](const int index) {
			if (index < 0 || (size_t)index >= _size) {throw std::out_of_range("index out of range");}
			return _array[index];
		}

		const T & operator[](const int index) const {
			if (index < 0 || (size_t)index >= _size) {throw std::out_of_range("index out of range");}
			return _array[index];
		}

		size_t size() const{ return _size; }
};

#endif
