#include "Contact.hpp"
#include <iomanip>
#include <iostream>

Contact::Contact(void){  
 
}

Contact::~Contact(void){
    std::cout << "Contact destroyed" << std::endl;
}

int Contact::fillInfo(void){
    std::cout << "Please fill contact fields\nFirst name : " ;
    std::getline(std::cin, m_firstName);
    std::cout << "Last name : " ;
    std::getline(std::cin, m_lastName);
    std::cout << "Nickname : " ;
    std::getline(std::cin, m_nickName);
    std::cout << "PhoneNumber : " ;
    std::getline(std::cin, m_phoneNumber);
    std::cout << "DarkestSecret : " ;
    std::getline(std::cin, m_darkestSecret);
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




