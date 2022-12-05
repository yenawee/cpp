#include "ClapTrap.hpp"

int main(){
    ClapTrap claptrap("YENA");

    claptrap.attack("tar");
    claptrap.takeDamage(15);
    claptrap.beRepaired(10);
    return 0;

}