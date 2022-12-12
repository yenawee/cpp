#ifndef WrongCat_HPP
# define WrongCat_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
    public:
        WrongCat(void);
        WrongCat(const WrongCat & src);
        virtual ~WrongCat(void);
        WrongCat & operator=(const WrongCat & rhs);
        void makeSound() const;
};

#endif