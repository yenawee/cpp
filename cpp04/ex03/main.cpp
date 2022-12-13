#include "Materia.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main(){
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    //src->learnMateria(new Ice());


    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    //tmp = src->createMateria("ice");

    //// downcasting 으로 슬랏 정보 확인
    //Character *m = (Character *)me;
    //m->showAllSlot();

    //// slot 에 없는데 추가로 create 하려고 할때
    //tmp = src->createMateria("ice");
    //tmp = src->createMateria("good");

    //me->unequip(3);

    //me->unequip(0);
    //m->showAllSlot();

    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    delete bob;
    delete me;
    delete src;
    //system("leaks a.out");

    return 0;
}
