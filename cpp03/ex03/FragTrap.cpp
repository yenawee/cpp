#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(){
    std::cout << "FragTrap created. default " << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name){
    hitPoints = FRAG_HP;
    energyPoints = FRAG_EP;
    attackDamage = FRAG_AD;
    std::cout << "FragTrap created (name : " << name << ")" << std::endl;
}

FragTrap::FragTrap(FragTrap const & src) : ClapTrap(src.getName()){
    std::cout << "FragTrap Copy constructor called" << std::endl;
    *this = src;
}

FragTrap::~FragTrap(){
    std::cout  << "FragTrap destroyed (name : " << name << ")" << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & src){
     if (this != &src){
        name = src.name;
        hitPoints = src.hitPoints;
        energyPoints = src.energyPoints;
        attackDamage = src.attackDamage;
    }
    return *this;
}

void FragTrap::attack(const std::string & target){
    if (hitPoints == 0 || energyPoints == 0){
        std::cout << "FragTrap (" << name << ") can't attack target ! (lack of hit Points or energy Points) " <<
        "hit Points : " << hitPoints << ", energy Points : " << energyPoints << std::endl;
        return ;
    }
    energyPoints--;
    std::cout << "FragTrap (" << name << ") attacks " << target
    << " causing " << attackDamage << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys(void){
    std::cout << "positive high fives request 👋" << std::endl;
}
