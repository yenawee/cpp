#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    std::cout << "name : " << name << " ScavTrap created" << std::endl;
    
}

ScavTrap::ScavTrap(ScavTrap const & src){
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
};


ScavTrap::~ScavTrapScavTrap(){
    std::cout  << "name : " << name << " ClapTrap destroyed" << std::endl;

};
ScavTrap & ScavTrap::operator=(ScavTrap const & src);