#include "Span.hpp"

Span::Span(void) : _n(0)
{
    // std::cout << "Span created. Default." << std::endl;
}

Span::Span(unsigned int n) : _n(n)
{
    // std::cout << "Span created. Default." << std::endl;
}

Span::Span(const Span & src)
{
    // std::cout << "Copy constructor called. " << std::endl;
     *this = src;
}

Span::~Span(void)
{
    // std::cout << "Span destroyed." << std::endl;
}

Span & Span::operator=(const Span & rhs)
{
    if (this != &rhs)
    {
        _n = rhs._n;
        _set.clear();
        std::multiset<int>::iterator it = rhs._set.begin();
        std::multiset<int>::iterator ite = rhs._set.end();
        for (; it != ite; ++it ) { _set.insert( *it ); }
    }
    return *this;
}

void Span::addNumber(const int n){
    if (_set.size() == _n) {
        throw std::out_of_range("Set is full !! ");
    }
    _set.insert(n);
}

void Span::addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end){
    if (_n < static_cast<unsigned int>(std::distance(start, end))){
        throw std::exception();
    }
    for ( ; start != end; start++){
        addNumber(*start);
    }
}


unsigned int Span::shortestSpan(){
    if (_set.size() < 2) {throw std::exception();}
    unsigned int _min = UINT_MAX;
    std::multiset<int>::iterator it = ++_set.begin();
    std::multiset<int>::iterator ite = _set.end();
    for (; it != ite; ++it){
        std::multiset<int>::iterator prev = it;
        unsigned int cur = *it;
        unsigned int pre = *(--prev);
        if ((cur - pre) < _min) {
            _min = cur - pre;
        }
    }
    return _min;
}

unsigned int Span::longestSpan(){
    if (_set.size() < 2) {throw std::exception();}
    unsigned int _min = *(_set.begin());
    unsigned int _max = *(_set.rbegin());
    return (_max - _min);
}

void Span::printAll(){
    std::cout << "set size is " << _set.size() << std::endl;
    std::multiset<int>::iterator it = _set.begin();
	std::multiset<int>::iterator ite = _set.end();
	for ( ; it != ite; ++it ) {
        std::cout << *it << " ";
    }
	std::cout << std::endl;
}
