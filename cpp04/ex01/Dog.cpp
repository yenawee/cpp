#include "Dog.hpp"

Dog::Dog(void)
{ 
    type = "Dog";
    std::cout << "Dog created. Default." << std::endl;
    brain = new Brain();
}

Dog::Dog(const Dog & src)
{ 
    std::cout << "Copy constructor called. " << std::endl; 
    *this = src; 
}

Dog::~Dog(void)
{ 
    delete brain;
    std::cout << "Dog destroyed." << std::endl; 
}

Dog & Dog::operator=(const Dog & rhs)
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

void Dog::makeSound() const{
    std::cout << "meong meong !! 🐶" << std::endl;
}

Brain *Dog::getBrain() const{
    return brain;
}