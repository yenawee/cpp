#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : 
{ 
    // std::cout << "PresidentialPardonForm created. Default." << std::endl; 
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & src)
{ 
    std::cout << "Copy constructor called. " << std::endl; 
     *this = src; 
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{ 
    std::cout << "PresidentialPardonForm destroyed." << std::endl; 
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm & rhs)
{
    if (this != &rhs)
    {
    }
    return *this;
}