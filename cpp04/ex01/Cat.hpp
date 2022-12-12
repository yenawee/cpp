#ifndef Cat_HPP
# define Cat_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
    private:
        Brain *brain;
    public:
        Cat(void);
        Cat(const Cat & src);
        ~Cat(void);
        Cat & operator=(const Cat & rhs);
        void makeSound() const;
        Brain *getBrain() const;
};

#endif