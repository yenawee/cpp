#include "AAnimal.hpp"

AAnimal::AAnimal(void)
{
    std::cout << "AAnimal created. Default" << std::endl;
}

AAnimal::AAnimal(const AAnimal & src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

AAnimal::~AAnimal(void)
{
    std::cout << "AAnimal destroyed" << std::endl;
}

AAnimal & AAnimal::operator=(const AAnimal & rhs)
{
    if (this != &rhs)
    {
        type = rhs.type;
    }
    return *this;
}

 std::string AAnimal::getType() const{
     return type;
 }


