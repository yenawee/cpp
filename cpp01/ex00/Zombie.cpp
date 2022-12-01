#include "Zombie.hpp"

Zombie::Zombie(void){
    std::cout << "Zombie created" << std::endl;
}

Zombie::Zombie(std::string name){
    _name = name;
    std::cout << "Zombie created. name : " << _name << std::endl;
}

Zombie::~Zombie(void){
    std::cout << _name << ": Zombie destroyed" << std::endl;
}

void Zombie::announce(void){
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

