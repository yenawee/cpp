#include "Zombie.hpp"

int main(){
    Zombie *zombie = newZombie("one");
    zombie->announce();
    delete zombie;
    randomChump("two");
    return 0;
}