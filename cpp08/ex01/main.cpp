#include "Span.hpp"

int main(){
    // Span sp = Span(5);

    // sp.addNumber(6);
    // sp.addNumber(3);
    // sp.addNumber(17);
    // sp.addNumber(9);
    // sp.addNumber(11);

    // sp.printAll();

    // std::cout << sp.shortestSpan() << std::endl;
    // std::cout << sp.longestSpan() << std::endl;

    std::vector<int> _vec;
    _vec.push_back(7);
    _vec.push_back(10);
    _vec.push_back(20);
    _vec.push_back(0);
    _vec.push_back(100);
    _vec.push_back(3);

    std::vector<int>::iterator start = _vec.begin();
    std::vector<int>::iterator end = _vec.end();

    Span sp = Span(6);
    sp.addNumber(start, end);

    sp.printAll();

    return 0;
}
