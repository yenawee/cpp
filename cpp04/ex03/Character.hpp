#ifndef Character_HPP
# define Character_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter{
    private:
        std::string name;
        Amateria slot[4];
    public:
        Character(void);
        Character(const Character & src);
        virtual ~Character(void);
        Character & operator=(const Character & rhs);
        std::string getName() const;
};

#endif