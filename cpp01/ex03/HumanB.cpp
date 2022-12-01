#include "HumanB.hpp"

HumanB::HumanB(std::string name){
    this->name = name;
    this->weapon = NULL;
}

HumanB::~HumanB(){}

void HumanB::setWeapon(Weapon & weapon){
    this->weapon = &weapon;
}

void HumanB::attack(){
    if (this->weapon){
        std::cout << name << " attacks with their " << (*weapon).getType() << std::endl;
    }
    else {
        std::cout << "No weapon No attack !! " << std::endl;
    }
} 