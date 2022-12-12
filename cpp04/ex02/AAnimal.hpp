#ifndef AAnimal_HPP
# define AAnimal_HPP

#include <iostream>
#include <string>

class AAnimal
{
    protected:
        std::string type;
    public:
        AAnimal(void);
        AAnimal(const AAnimal & src);
        virtual ~AAnimal(void);
        AAnimal & operator=(const AAnimal & rhs);
        std::string getType() const;
        virtual void makeSound() const = 0;
};

#endif