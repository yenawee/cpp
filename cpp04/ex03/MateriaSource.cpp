#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) : IMateriaSource(), size(0)
{
    std::cout << "MateriaSource created. Default." << std::endl;
    for (int idx = 0; idx < 4; idx++){
        slots[idx] = NULL;
    }
}

MateriaSource::MateriaSource(const MateriaSource & src)
{
    std::cout << "Copy constructor called. " << std::endl;
     *this = src;
}

MateriaSource::~MateriaSource(void)
{
    for (int idx = 0; idx < 4; idx++){
        if (slots[idx]){
            delete slots[idx];
        }
    }
    std::cout << "MateriaSource destroyed." << std::endl;
}

MateriaSource & MateriaSource::operator=(const MateriaSource & rhs)
{
    if (this != &rhs)
    {
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

void MateriaSource::learnMateria(AMateria* m){
     if (size > 3){
        std::cout << "Slot reached FULL capacity!! We can't learn more." << std::endl;
        return ;
    }
    for (int i = 0; i < 4; i++){
        if (!slots[i]){
            slots[i] = m;
            size++;
            break ;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type){
    for (int i = 0; i < 4; i++){
        if (slots[i] && slots[i]->getType() == type){
            AMateria *tmp = slots[i]->clone();
            delete slots[i];
            slots[i] = NULL;
            size--;
            return tmp;
        }
    }
    return 0;
}
