#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap(){
	std::cout << "Diamond Trap created. default" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name"){
	this->name = name;
	hitPoints = FRAG_HP;
	energyPoints = SCAV_EP;
	attackDamage = FRAG_AD;
	std::cout << "DiamondTrap created (name : " <<  name << ")" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src){
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = src;
}


DiamondTrap::~DiamondTrap(){
    std::cout  << "DiamondTrap destroyed (name : " << name << ")" << std::endl;
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
