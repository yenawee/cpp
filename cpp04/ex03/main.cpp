#include "Materia.hpp"

int main(){
    AMateria *n = new Ice();
    AMateria *d = new Cure();

    *n = *d;
    std::cout << n->getType() << std::endl;

}