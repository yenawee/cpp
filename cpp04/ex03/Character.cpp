#include "Character.hpp"

Character::Character(void)
{ 
    std::cout << "Character created. Default." << std::endl; 
}

Character::Character(const Character & src)
{ 
    std::cout << "Copy constructor called. " << std::endl; 
     *this = src; 
}

Character::~Character(void)
{ 
    std::cout << "Character destroyed." << std::endl; 
}

Character & Character::operator=(const Character & rhs)
{
    if (this != &rhs)
    {
    }
    return *this;
}

std::string Character::getName() const{
    return name;
}