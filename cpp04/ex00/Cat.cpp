#include "Cat.hpp"

Cat::Cat(void)
{ 
    type = "Cat";
    std::cout << "Cat created. Default." << std::endl; 
}

Cat::Cat(const Cat & src)
{ 
    std::cout << "Copy constructor called. " << std::endl;
     *this = src; 
}

Cat::~Cat(void)
{ 
    std::cout << "Cat destroyed." << std::endl; 
}

Cat & Cat::operator=(const Cat & rhs)
{
    if (this != &rhs)
    {
        type = rhs.getType();
    }
    return *this;
}

void Cat::makeSound() const{
    std::cout << "meow meow 😸" << std::endl;
}