#include "Cat.hpp"

Cat::Cat(void)
{ 
    type = "Cat";
    std::cout << "Cat created. Default." << std::endl;
    brain = new Brain();
}

Cat::Cat(const Cat & src)
{ 
    std::cout << "Copy constructor called. " << std::endl;
     *this = src; 
}

Cat::~Cat(void)
{ 
    delete brain;
    std::cout << "Cat destroyed." << std::endl; 
}

Cat & Cat::operator=(const Cat & rhs)
{
    if (this != &rhs)
    {
        type = rhs.getType();
        if (brain){
            delete brain;
            brain = NULL;
        }
        brain = new Brain(*rhs.brain);
    }
    return *this;
}

void Cat::makeSound() const{
    std::cout << "meow meow 😸" << std::endl;
}

Brain *Cat::getBrain() const{
    return brain;
}