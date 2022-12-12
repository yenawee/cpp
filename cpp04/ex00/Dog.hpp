#ifndef Dog_HPP
# define Dog_HPP

#include "Animal.hpp"

class Dog : public Animal {
    public:
        Dog(void);
        Dog(const Dog & src);
        virtual ~Dog(void);
        Dog & operator=(const Dog & rhs);
        void makeSound() const;
};

#endif