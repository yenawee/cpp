#include "IMaterialsource.hpp"

IMaterialsource::IMaterialsource(void)
{ 
    std::cout << "IMaterialsource created. Default." << std::endl; 
}

IMaterialsource::IMaterialsource(const IMaterialsource & src)
{ 
    std::cout << "Copy constructor called. " << std::endl; 
     *this = src; 
}

IMaterialsource::~IMaterialsource(void)
{ 
    std::cout << "IMaterialsource destroyed." << std::endl; 
}

IMaterialsource & IMaterialsource::operator=(const IMaterialsource & rhs)
{
    if (this != &rhs)
    {
    }
    return *this;
}