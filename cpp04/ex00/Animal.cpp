#include "Animal.hpp"

Animal::Animal(void)
{
    std::cout << "Animal created. Default" << std::endl;
}

Animal::Animal(const Animal & src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Animal::~Animal(void)
{
    std::cout << "Animal destroyed" << std::endl;
}

Animal & Animal::operator=(const Animal & rhs)
{
    if (this != &rhs)
    {
        type = rhs.type;
    }
    return *this;
}

 std::string Animal::getType() const{
     return type;
 }

void Animal::makeSound() const{
    std::cout << "who am i? I don't know my sound because i'm not specified" << std::endl;
}

