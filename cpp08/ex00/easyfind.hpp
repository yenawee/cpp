#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

template <typename T> 
typename T::iterator easyfind(T & container, const int n){
    typename T::iterator itr = std::find(container.begin(), container.end(), n);
    if (itr == container.end()){
        throw std::exception();
    }
    return itr;
}

#endif