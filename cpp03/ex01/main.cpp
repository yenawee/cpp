#include "ScavTrap.hpp"

int main(){
    ScavTrap b("malibu");

    // 멤버 변수 값 확인
    std::cout << "hitpoints : " << b.getHitPoints() << std::endl;
    std::cout << "energy points : " << b.getEnergyPoints() << std::endl;
    std::cout << "attack damage : " << b.getAttackDamage() << std::endl;

    b.guardGate();
    b.attack("target 1");

    // upcasting
    ClapTrap *a = &b;
    // attack 가상 함수 오버라이딩
    a->attack("target 2");

    // 업캐스팅 후 파생클래스에서 추가된 메소드를 실행하면 err 발생
    //a->guardGate();
}
