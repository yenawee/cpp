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

    int arr[] = {7, 10, 20, 0, 100, 3};
    std::vector<int> _vec(arr, arr + sizeof(arr) / sizeof(int));

    std::vector<int>::iterator start = _vec.begin();
    std::vector<int>::iterator end = _vec.end();

    Span sp = Span(6);
    sp.addNumber(start, end);
    sp.printAll();

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    return 0;
}
