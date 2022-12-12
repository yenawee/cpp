#include "Character.hpp"

Character::Character(void)
{
    std::cout << "Character created. Default." << std::endl;
    for (int idx = 0; idx < 4; idx++){
        slots[idx] = NULL;
    }
}

Character::Character(const Character & src)
{
    std::cout << "Character Copy constructor called. " << std::endl;
     *this = src;
}

Character::Character(std::string name) : name(name), size(0) {
    std::cout << "Character created. (name : " << name << ")" << std::endl;
     for (int idx = 0; idx < 4; idx++){
        slots[idx] = NULL;
    }
}

Character::~Character(void)
{
    for (int idx = 0; idx < 4; idx++){
        if (slots[idx]){
            delete slots[idx];
        }
    }
    std::cout << "Character destroyed." << std::endl;
}

Character & Character::operator=(const Character & rhs)
{
    if (this != &rhs)
    {
        name = rhs.name;
        size = rhs.size;
        for (int idx = 0; idx < 4; idx++){
            if (slots[idx]){
                delete slots[idx];
            }
            if (rhs.slots[idx]){
                slots[idx] = rhs.slots[idx]->clone();
            }
        }
    }
    return *this;
}

std::string const & Character::getName() const{
    return name;
}

void Character::equip(AMateria* m){
    if (size > 3){
        std::cout << "Slot reached FULL capacity!! We can't equip more." << std::endl;
        return ;
    }
    for (int i = 0; i < 4; i++){
        if (!slots[i]){
            slots[i] = m;
            size++;
            break ;
        }
    }
};

void Character::unequip(int idx){
    if (idx < 0 || idx > 3){
        std::cout << "Wrong index!!" << std::endl;
        return ;
    }
    if (slots[idx]){
        slots[idx] = NULL;
        size--;
    }
};

void Character::use(int idx, ICharacter & target){
    if (idx < 0 || idx > 3){
        std::cout << "Wrong index !!" << std::endl;
        return ;
    }
    if (slots[idx]){
        slots[idx]->use(target);
    }
};
