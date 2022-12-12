#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
    private:
        AMateria *slots[4];
        int size;
    public:
        MateriaSource(void);
        MateriaSource(const MateriaSource & src);
        ~MateriaSource(void);
        MateriaSource & operator=(const MateriaSource & rhs);
        void learnMateria(AMateria* m);
        AMateria* createMateria(std::string const & type);
};

#endif
