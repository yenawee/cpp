#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{ 
    std::cout << "WrongCat created. Default." << std::endl; 
}

WrongCat::WrongCat(const WrongCat & src)
{ 
    std::cout << "Copy constructor called. " << std::endl; 
     *this = src; 
}

WrongCat::~WrongCat(void)
{ 
    std::cout << "WrongCat destroyed." << std::endl; 
}

WrongCat & WrongCat::operator=(const WrongCat & rhs)
{
    if (this != &rhs)
    {
        type = rhs.getType();
    }
    return *this;
}

void WrongCat::makeSound() const{
    std::cout << "meeeeeeeeow.....wrong......meeeeeowww.... wrong..." << std::endl;
}
