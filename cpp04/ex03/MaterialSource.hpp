#ifndef MaterialSource_HPP
# define MaterialSource_HPP

#include "IMaterialSource.hpp"

class MaterialSource : public IMaterialSource {
    private:
    public:
        MaterialSource(void);
        MaterialSource(const MaterialSource & src);
        virtual ~MaterialSource(void);
        MaterialSource & operator=(const MaterialSource & rhs);
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
};

#endif