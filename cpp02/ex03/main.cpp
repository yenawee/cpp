#include "Point.hpp"

int main(){
    Point p1(0,0);
    Point p2(0,10);
    Point p3(5,5);
    Point p(1,1);

    if (bsp(p1, p2, p3, p)){
        std::cout << "I'm in triangle !!" << std::endl;
    }
    else {
        std::cout << "I'm not in triangle !!" << std::endl;
    }
    return 0;
}