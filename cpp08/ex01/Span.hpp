#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
    private:
        unsigned int _n;
        unsigned int _size;
    public:
        Span(void);
        Span(unsigned int n);
        Span(const Span & src);
        virtual ~Span(void);
        Span & operator=(const Span & rhs);

        void addNumber(const int n);
        unsigned int shortestSpan();
        unsigned int longestSpan();

};

#endif