#ifndef Cat_HPP
# define Cat_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {
    private:
        Brain *brain;
    public:
        Cat(void);
        Cat(const Cat & src);
        virtual ~Cat(void);
        Cat & operator=(const Cat & rhs);
        void makeSound() const;
        Brain *getBrain() const;
};

#endif