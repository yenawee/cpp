#include "Span.hpp"

Span::Span(void)
{ 
    std::cout << "Span created. Default." << std::endl; 
}

Span::Span(const Span & src)
{ 
    std::cout << "Copy constructor called. " << std::endl; 
     *this = src; 
}

Span::~Span(void)
{ 
    std::cout << "Span destroyed." << std::endl; 
}

Span & Span::operator=(const Span & rhs)
{
    if (this != &rhs)
    {
    }
    return *this;
}