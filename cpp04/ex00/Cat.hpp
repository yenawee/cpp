#ifndef Cat_HPP
# define Cat_HPP

#include "Animal.hpp"

class Cat : public Animal {
    public:
        Cat(void);
        Cat(const Cat & src);
        virtual ~Cat(void);
        Cat & operator=(const Cat & rhs);
        void makeSound() const;
};

#endif