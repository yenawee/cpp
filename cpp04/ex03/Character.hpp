#ifndef Character_HPP
# define Character_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter{
    private:
        std::string name;
        int size;
        AMateria *slots[4];
    public:
        Character(void);
        Character(std::string name);
        Character(const Character & src);
        ~Character(void);
        Character & operator=(const Character & rhs);
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter & target);
        void showAllSlot() const;
};

#endif
