#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{ 
    std::cout << "WrongAnimal created. Default." << std::endl; 
}

WrongAnimal::WrongAnimal(const WrongAnimal & src)
{ 
    std::cout << "Copy constructor called. " << std::endl; 
     *this = src; 
}

WrongAnimal::~WrongAnimal(void)
{ 
    std::cout << "WrongAnimal destroyed." << std::endl; 
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal & rhs)
{
    if (this != &rhs)
    {
        type = rhs.type;
    }
    return *this;
}

std::string WrongAnimal::getType() const{
     return type;
 }

void WrongAnimal::makeSound() const{
    std::cout << "I'm not animal.. i'm wrong.." << std::endl;
}
