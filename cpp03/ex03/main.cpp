#include "FragTrap.hpp"

int main(){
    FragTrap b("malibu");

    ClapTrap *a = &b;

   a->attack("target");
   a->takeDamage(150);
 
}