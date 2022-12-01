#include "HumanA.hpp"
#include "HumanB.hpp"

int main(){
    Weapon  club = Weapon("crude spiked club");
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type");
    bob.attack();

    club = Weapon("crude spiked club");
    HumanB jim("Jim");
    jim.setWeapon(club);
    jim.attack();
    club.setType("some other type");
    jim.attack();
    return 0;
}