#include "Zombie.hpp"

Zombie::Zombie(void){
    std::cout << "Zombie created" << std::endl;
}

Zombie::~Zombie(void){
    std::cout << _name << ": Zombie destroyed" << std::endl;
}

void Zombie::announce(void){
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name){
    _name = name;
}