#include "Harl.hpp"

Harl::Harl(){};
Harl::~Harl(){};

void Harl::debug(void){
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
};

void  Harl::info(void){
    std::cout << "I cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
};

void Harl::warning(void){
    std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month." << std::endl;


};

void Harl::error(void){
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;

};

void Harl::wrongInput(void){
    std::cout << "wrong input !" << std::endl;
}

void Harl::complain(std::string level){
    std::string Keys[5] = {"dummy", "WARNING", "INFO", "ERROR", "DEBUG"};
    static void (Harl::*func[5]) (void) = {&Harl::wrongInput, &Harl::warning, &Harl::info, &Harl::error, &Harl::debug};

    int index = hash(level);
    if (Keys[index] == level){
        (this->*func[index])();
    }
    else {
        wrongInput();
    }
}

int Harl::hash(std::string str){
    unsigned long hash = 5381;
    hash = (((hash << 5) + hash) + str.front()) % 5;
    hash = (((hash << 5) + hash) + str.back()) % 5;
    return hash % 5;
}