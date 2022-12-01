#include "stringreplace.hpp"

int main(int argc, char **argv){
    if (argc != 4){
        std::cout << "parameters needed : filename, string1, string2 " << std::cout;
    }
    else {
        char *filename = argv[1];
        std::string str1(argv[2]);
        std::string str2(argv[3]);
        stringreplace(filename, str1, str2);
    }
    return 0;
}