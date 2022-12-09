#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(){
    std::cout << "ScavTrap created. default " << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    hitPoints = SCAV_HP;
    energyPoints = SCAV_EP;
    attackDamage = SCAV_AD;
    std::cout << "ScavTrap created (name : " << name << ")" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap(src.getName()) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}


ScavTrap::~ScavTrap(){
    std::cout  << "ScavTrap destroyed (name : " << name << ")" << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & src){
    if (this != &src){
        name = src.name;
        hitPoints = src.hitPoints;
        energyPoints = src.energyPoints;
        attackDamage = src.attackDamage;
    }
    return *this;
}

void ScavTrap::attack(const std::string & target){
    if (hitPoints == 0 || energyPoints == 0){
        std::cout << "ScavTrap (" << name << ") can't attack target ! (lack of hit Points or energy Points) " <<
        "hit Points : " << hitPoints << ", energy Points : " << energyPoints << std::endl;
        return ;
    }
    energyPoints--;
    std::cout << "ScavTrap (" << name << ") attacks " << target
    << " causing " << attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate(){
    std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}
