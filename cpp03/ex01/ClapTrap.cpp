#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
    std::cout << "ClapTrap created. Default" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0){
    std::cout << "ClapTrap created (name : " <<  name << ")" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src){
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

ClapTrap::~ClapTrap(){
    std::cout  << "ClapTrap destroyed (name : " << name << ")" << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs){
    if (this != &rhs){
        name = rhs.name;
        hitPoints = rhs.hitPoints;
        energyPoints = rhs.energyPoints;
        attackDamage = rhs.attackDamage;
    }
    return *this;
}

void ClapTrap::attack(const std::string & target){
    if (hitPoints == 0 || energyPoints == 0){
        std::cout << "ClapTrap " << name << " can't attack target ! (lack of hit Points or energy Points) " <<
        "hit Points : " << hitPoints << ", energy Points : " << energyPoints << std::endl;
        return ;
    }
    energyPoints--;
    std::cout << "ClapTrap " << name << " attacks " << target
    << " causing " << attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
    if (hitPoints == 0){
        std::cout << "ClapTrap can't take damage ! (hit Points = 0)" << std::endl;
    }
    else if (hitPoints < amount){
        std:: cout << "ClapTrap take damage ! " << amount << " hit points  : " << hitPoints << " -> 0. \n"
        << "(because of lack of hit Points, amount " << amount - hitPoints << " couldn't be taken)" << std::endl;
        hitPoints = 0;
    }
    else {
        std:: cout << "ClapTrap take damage ! hit points  : " << hitPoints << " to "
        << hitPoints - amount << std::endl;
        hitPoints -= amount;
    }
}

void ClapTrap::beRepaired(unsigned int amount){
    if (hitPoints == 0 || energyPoints == 0){
        std::cout << "ClapTrap " << name << " can't repair hit points! (lack of hit Points or energy Points) " <<
        "hit Points : " << hitPoints << ", energy Points : " << energyPoints << std::endl;
        return ;
    }
    energyPoints--;
    std::cout << "ClapTrap " << name << " repaired hit points " <<  hitPoints
    << " to " << hitPoints + amount << std::endl;
    hitPoints += amount;
}

std::string ClapTrap::getName() const {
    return name;
}

unsigned int ClapTrap::getHitPoints() const{
    return hitPoints;
}

unsigned int ClapTrap::getEnergyPoints() const{
    return energyPoints;
}

unsigned int ClapTrap::getAttackDamage() const{
    return attackDamage;
}
