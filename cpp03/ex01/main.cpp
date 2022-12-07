#include "ScavTrap.hpp"

int main(){
    ScavTrap b("malibu");

    ClapTrap *a = &b;

   a->attack("target");
   a->takeDamage(30);
 
}