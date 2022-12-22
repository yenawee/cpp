#ifndef ITER_HPP
# define ITER_HPP

#include <cstring>
#include <iostream>

template<typename T>
void iter(T *arr, size_t len, void (*f)(T const & value)){
	if (!arr || len == 0 || !f){
		return ;
	}
	for (size_t i = 0; i < len; i++){
		f(arr[i]);
	}
}

template<typename T>
void _print(T const & x){
	std::cout << x << std::endl;
}

#endif
