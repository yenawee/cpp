#ifndef Animal_HPP
# define Animal_HPP

#include <iostream>
#include <string>

class Animal
{
    protected:
        std::string type;
    public:
        Animal(void);
        Animal(const Animal & src);
        virtual ~Animal(void);
        Animal & operator=(const Animal & rhs);
        std::string getType() const;
        virtual void makeSound() const;
};

#endif