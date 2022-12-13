#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{ 
    // std::cout << "Bureaucrat created. Default." << std::endl; 
}

Bureaucrat::Bureaucrat(std::string const & name, int index) : name(name), index(index)

Bureaucrat::Bureaucrat(const Bureaucrat & src)
{ 
    // std::cout << "Copy constructor called. " << std::endl; 
     *this = src; 
}

Bureaucrat::~Bureaucrat(void)
{ 
    // std::cout << "Bureaucrat destroyed." << std::endl; 
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat & rhs)
{
    if (this != &rhs)
    {
        
    }
    return *this;
}

std::string Bureaucrat::getName() const{
    return name;
}

int Bureaucrat::getGrade() const{
    return grade;
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs){
    std::cout << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
}