#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <set>
#include <algorithm>

class Span
{
    private:
        std::multiset<int> _set;
        unsigned int _n;
    
    public:
        Span(void);
        Span(unsigned int n);
        Span(const Span & src);
        virtual ~Span(void);
        Span & operator=(const Span & rhs);

        void addNumber(const int n);
        unsigned int shortestSpan();
        unsigned int longestSpan();
        void printAll();
        void fillMySpan();
};

#endif