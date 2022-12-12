#ifndef WrongAnimal_HPP
# define WrongAnimal_HPP

#include <iostream>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal(void);
        WrongAnimal(const WrongAnimal & src);
        virtual ~WrongAnimal(void);
        WrongAnimal & operator=(const WrongAnimal & rhs);
        std::string getType() const;
        void makeSound() const;
};

#endif