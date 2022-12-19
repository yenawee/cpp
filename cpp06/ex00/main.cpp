#include "conversion.hpp"

int main(int argc, char **argv){
    if (argc != 2){
        std::cout << "[Wrong input] Parameter : a string" << std::endl;
        return 0;
    }

    std::stringstream sc(argv[1]);
    std::stringstream si(argv[1]);
    std::stringstream sf(argv[1]);
    std::stringstream sd(argv[1]);

    // char c;
    int i;
    float f;
    double d;

    // ss >> c;
    si >> i;
    sf >> f;
    sd >> d;

    std::cout << std::fixed;
    std::cout.precision(1);
    // std::cout << "char: " << static_cast<char>(c) << std::endl;
    std::cout << "int: " << i << std::endl;
    std::cout << "float: " << f << std::endl;  
    std::cout << "double: " << d << std::endl;
    
}