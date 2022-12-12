#include "Materia.hpp"


// Ice
Ice::Ice() : AMateria("ice") {
    std::cout << "Ice constructed. default" << std::endl;
};

Ice::Ice(const Ice & src){
    std::cout << "Ice Copy constructor called" << std::endl;
    *this = src;
}
        
Ice::~Ice(){
    std::cout << "Ice destructed" << std::endl;
};

Ice & Ice::operator=(const Ice & rhs){
    if (this != &rhs){
        type = rhs.type;
    }
    return *this;
}

AMateria* Ice::clone() const{
    return (new Ice(*this));
}

void Ice::use(ICharacter& target){
    std::cout << "* shoots an ice bolt at " << target.getName() << "*" << std::endl;
}


// Cure
Cure::Cure() : AMateria("cure"){
    std::cout << "Cure constructed. default" << std::endl;
};

Cure::Cure(const Cure & src){
    std::cout << "Cure Copy constructor called" << std::endl;
    *this = src;
}
        
Cure::~Cure(){
    std::cout << "Cure destructed" << std::endl;
}

Cure & Cure::operator=(const Cure & rhs){
    if (this != &rhs){
        type = rhs.type;
    }
    return *this;
}

AMateria* Cure::clone() const{
    return (new Cure(*this));
}

void Cure::use(ICharacter& target){
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
