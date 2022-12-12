#include "MaterialSource.hpp"

MaterialSource::MaterialSource(void)
{ 
    std::cout << "MaterialSource created. Default." << std::endl; 
}

MaterialSource::MaterialSource(const MaterialSource & src)
{ 
    std::cout << "Copy constructor called. " << std::endl; 
     *this = src; 
}

MaterialSource::~MaterialSource(void)
{ 
    std::cout << "MaterialSource destroyed." << std::endl; 
}

MaterialSource & MaterialSource::operator=(const MaterialSource & rhs)
{
    if (this != &rhs)
    {
        
    }
    return *this;
}