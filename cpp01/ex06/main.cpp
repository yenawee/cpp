#include "Harl.hpp"

int main(int argc, char **argv){
    Harl harl;
    if (argc != 2){
        std::cout << "Argument wrong! " << std::endl;
        return 0;
    }
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;
    std::string level(argv[1]);
    while (i < 4) {
        if (!level.compare(levels[i])){
            break ;
        }
        i++;
    }
    switch(i){
        case 0 : 
            harl.complain("DEBUG");
        case 1 : 
            harl.complain("INFO");
        case 2 : 
            harl.complain("WARNING");
        case 3 : 
            harl.complain("ERROR");
            break ;
        default : 
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}