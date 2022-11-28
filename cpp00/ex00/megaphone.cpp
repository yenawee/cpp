#include <iostream>
#include <string>

int main(int argc, char **argv){
    std::string str;
    if (argc > 1){
        for (int i = 1; i < argc; i++){
            std::string input(argv[i]);
            for (size_t j = 0; j < input.length(); j++){
                str += std::toupper(input[j]);
            }
        }
    }
    else {
        str = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    }
    std::cout << str << std::endl;
    return 0;
}