#include "DiamondTrap.hpp"

int main(){
    DiamondTrap b("malibu");

    std::cout << "hitpoints : " << b.getHitPoints() << std::endl;
    std::cout << "energy points : " << b.getEnergyPoints() << std::endl;
    std::cout << "attack damage : " << b.getAttackDamage() << std::endl;

    b.attack("dia");
    b.whoAmI();




}
