#include "AMateria.hpp"

AMateria::AMateria(void)
{ 
    std::cout << "AMateria created. Default." << std::endl; 
}

AMateria::AMateria(std::string const & type) : type(type) {
    std::cout << "AMateria created." << std::endl; 
}

AMateria::AMateria(const AMateria & src)
{ 
    std::cout << "Copy constructor called. " << std::endl; 
     *this = src; 
}

AMateria::~AMateria(void)
{ 
    std::cout << "AMateria destroyed." << std::endl; 
}

AMateria & AMateria::operator=(const AMateria & rhs)
{
    if (this != &rhs)
    {
        type = rhs.type;

    }
    return *this;
}

std::string const & AMateria::getType() const{
    return type;
}


void AMateria::use(ICharacter& target){
    std::cout << target.getName() << "has no Materia" << std::endl;
}