#include "Dog.hpp"

Dog::Dog(void)
{ 
    type = "Dog";
    std::cout << "Dog created. Default." << std::endl; 
}

Dog::Dog(const Dog & src)
{ 
    std::cout << "Copy constructor called. " << std::endl; 
    *this = src; 
}

Dog::~Dog(void)
{ 
    std::cout << "Dog destroyed." << std::endl; 
}

Dog & Dog::operator=(const Dog & rhs)
{
    if (this != &rhs)
    {
        type = rhs.getType();
    }
    return *this;
}

void Dog::makeSound() const{
    std::cout << "meong meong !! 🐶" << std::endl;
}