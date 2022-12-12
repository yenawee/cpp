#include "Brain.hpp"

Brain::Brain(void)
{ 
    std::cout << "Brain created. Default." << std::endl; 
    for (int i = 0; i < 100; i++){
        ideas[i] = "0123456789ABCDEF"[i % 16];
    }
}

Brain::Brain(const Brain & src)
{ 
    std::cout << "Copy constructor called. " << std::endl; 
    *this = src; 
}

Brain::~Brain(void)
{ 
    std::cout << "Brain destroyed." << std::endl; 
}

Brain & Brain::operator=(const Brain & rhs)
{
    if (this != &rhs)
    {
        for (int i = 0; i < 100; i++){
            ideas[i] = rhs.ideas[i];
        }
    }
    return *this;
}

std::string Brain::getIdea(int index) const{
    if (index < 0 || index > 99){
        std::cout << "Wrong index !! " << std::endl;
        return 0;
    }
    return ideas[index];
}

void    Brain::setIdea(int index, const std::string str) {
     if (index < 0 || index > 99){
        std::cout << "Wrong index !! " << std::endl;
        return ;
    }
    ideas[index] = str;
}

void    Brain::printAll() const{
    for (int i = 0; i < 100; i++){
        std::cout << ideas[i] << std::endl;
    }
}
