#ifndef ITER_HPP
# define ITER_HPP

#include <cstring>
#include <iostream>

template<typename T>
void iter(T *arr, size_t len, void (*f)(T & value)){
	if (!arr || len == 0 || !f){
		return ;
	}
	for (size_t i = 0; i < len; i++){
		f(arr[i]);
	}
}

template<typename T>
void _sqrt(T &x){
	x *= x;
}

template<typename T>
void _print(T &x){
	std::cout << x << std::endl;
}

#endif
