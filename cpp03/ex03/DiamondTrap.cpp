#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap(){
	std::cout << "Diamond Trap created. default" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name){
	this->name = name;
	hitPoints = FragTrap::getHitPoints();
	energyPoints = ScavTrap::getEnergyPoints();
	attackDamage = FragTrap::getAttackDamage();
}

DiamondTrap::DiamondTrap(DiamondTrap const & src){
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = src;
}


DiamondTrap::~DiamondTrap(){
    std::cout  << "DiamondTrap destroyed. name : " << name << std::endl;

}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & src){
	if (this != &src){
    	name = src.name;
    	hitPoints = src.hitPoints;
    	energyPoints = src.energyPoints;
    	attackDamage = src.attackDamage;
    }
    return *this;
}

void DiamondTrap::attack(const std::string& target){
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(){
	std::cout << "My name is " << name << " and ClapTrap::name is " << ClapTrap::getName() << std::endl;
}
