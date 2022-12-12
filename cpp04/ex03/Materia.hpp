#ifndef MATERIA_HPP
# define MATERIA_HPP 

#include "AMateria.hpp"

class Ice : public AMateria {
    public :
        Ice();
        Ice(std::string const & type);
        Ice(const Ice & src);
        virtual ~Ice();
        Ice & operator=(const Ice & rhs);
        AMateria* clone() const;
        void use(ICharacter& target); 
};

class Cure : public AMateria {
    public :
        Cure();
        Cure(std::string const & type);
        Cure(const Cure & src);
        virtual ~Cure();
        Cure & operator=(const Cure & rhs);
        AMateria* clone() const;
        void use(ICharacter& target); 
};

#endif