#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{ 
    std::cout << "Bureaucrat created. Default." << std::endl; 
}

Bureaucrat::Bureaucrat(const Bureaucrat & src)
{ 
    std::cout << "Copy constructor called. " << std::endl; 
     *this = src; 
}

Bureaucrat::~Bureaucrat(void)
{ 
    std::cout << "Bureaucrat destroyed." << std::endl; 
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat & rhs)
{
    if (this != &rhs)
    {
    }
    return *this;
}