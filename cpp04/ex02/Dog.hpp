#ifndef Dog_HPP
# define Dog_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {
    private:
        Brain *brain;
    public:
        Dog(void);
        Dog(const Dog & src);
        virtual ~Dog(void);
        Dog & operator=(const Dog & rhs);
        void makeSound() const;
        Brain *getBrain() const;
};

#endif