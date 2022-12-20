#include "Conversion.hpp"

int main(int argc, char **argv){
    if (argc != 2){
        std::cout << "[Wrong input] Parameter needed : a string" << std::endl;
        return 0;
    }

    Conversion conversion(argv[1]);
    conversion.convert();
    std::cout << conversion;
}
