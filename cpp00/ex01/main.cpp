#include <iostream>
#include <string>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(){
    PhoneBook phonebook;

    while (true){
        std::string input;
        std::cin >> input;
        if (!input.compare("ADD")){

        }
        else if (!input.compare("DISPLAY")){
            // phonebook.display();

        }
        else if (!input.compare("EXIT")){
            break ;
        }
    }
    return 0;

}