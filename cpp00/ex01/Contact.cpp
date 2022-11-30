#include "Contact.hpp"
#include <iomanip>
#include <iostream>

Contact::Contact(void){
}

Contact::~Contact(void){
}

int Contact::fillInfo(void){
    std::string prompt[5] = {"First name : ", "Last name : ", "Nickname : ", "Phone number : ", "Darkest secret : "};
    void ( Contact::*func[5] )( std::string ) = {
		&Contact::setFirstName, &Contact::setLastName, &Contact::setNickName,
		&Contact::setPhoneNumber, &Contact::setDarkestSecret };
    std::cout << "Please fill contact fields\n";
    for (int i = 0; i < 5; i++){
        std::cout << prompt[i];
        std::string input;
        std::getline(std::cin, input);
        if (std::cin.eof()){
            exit(1);
        }
        if (input.length() != 1 || input[0] - '0' < 0 || input[0] - '0' > 8){
            return (false);
        }
       (this->*func[i])(input);
    }
    return (true);
}

void Contact::setFirstName(std::string str){
    m_firstName = str;
}

void Contact::setLastName(std::string str){
    m_lastName = str;
}

void Contact::setNickName(std::string str){
    m_nickName = str;
}

void Contact::setPhoneNumber(std::string str){
    m_phoneNumber = str;
}

void Contact::setDarkestSecret(std::string str){
    m_darkestSecret = str;
}

std::string Contact::truncateStr(std::string str){
    if (str.length() > 10){
        str = str.substr(0, 10);
        str.replace(9, 1, ".");
    }
    return str;
}

void Contact::show(){
    char sep = '|';
    std::string newFirstName = truncateStr(m_firstName);
    std::string newLastName  = truncateStr(m_lastName);
    std::string newNickName = truncateStr(m_nickName);
    std::cout << std::right;
    std::cout << std::setw(10) << newFirstName << sep;
    std::cout << std::setw(10) << newLastName << sep;
    std::cout << std::setw(10) << newNickName << std::endl;
}




