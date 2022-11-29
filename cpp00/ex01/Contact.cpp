#include "Contact.hpp"
#include <iomanip>
#include <iostream>

Contact::Contact(void){
}

Contact::~Contact(void){
}

int Contact::fillInfo(void){
    std::cout << "Please fill contact fields\nFirst name : " ;
    std::getline(std::cin, m_firstName);
    if (std::cin.eof()) {
		exit(1) ;
    }
    std::cout << "Last name : " ;
    std::getline(std::cin, m_lastName);
     if (std::cin.eof()) {
		exit(1) ;
    }
    std::cout << "Nickname : " ;
    std::getline(std::cin, m_nickName);
     if (std::cin.eof()) {
		exit(1) ;
    }
    std::cout << "PhoneNumber : " ;
    std::getline(std::cin, m_phoneNumber);
     if (std::cin.eof()) {
		exit(1) ;
    }
    std::cout << "DarkestSecret : " ;
    std::getline(std::cin, m_darkestSecret);
     if (std::cin.eof()) {
		exit(1) ;
    }
    if (!m_firstName.length() || !m_lastName.length() || !m_nickName.length() || !m_phoneNumber.length() || !m_darkestSecret.length()){
        return (false);
    }
    return (true);
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
    m_firstName = truncateStr(m_firstName);
    m_lastName  = truncateStr(m_lastName);
    m_nickName = truncateStr(m_nickName);
    std::cout << std::right;
    std::cout << std::setw(10) << m_firstName << sep;
    std::cout << std::setw(10) << m_lastName << sep;
    std::cout << std::setw(10) << m_nickName << std::endl;
}




