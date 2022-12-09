#include "ClapTrap.hpp"

int main(){
    // 생성
    ClapTrap claptrap("YENA");

    // 복사 생성
    ClapTrap copy_claptrap(claptrap);

    // attack test
    claptrap.attack("tar");

    // takedamage test
    claptrap.takeDamage(8);
    // damage 를 hitpoint 이상으로 줬을 때
    copy_claptrap.takeDamage(15);

    // repair test
    claptrap.beRepaired(10);

    // hit point 0 일 때 동작 안함
    copy_claptrap.attack("targ");
    copy_claptrap.beRepaired(10);
    copy_claptrap.takeDamage(10);

    // energy point 0 일때 동작 안함
    for (int i = 0; i < 10; i++){
        claptrap.beRepaired(1);
    }
    claptrap.attack("targe");
    claptrap.takeDamage(1);
    return 0;

}
