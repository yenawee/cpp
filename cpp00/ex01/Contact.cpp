#include "Contact.hpp"
#include <iomanip>
#include <iostream>

Contact::Contact(void){
}

Contact::~Contact(void){
}

int Contact::fillInfo(void){
    static void ( Contact::*func[5] )( const std::string ) = {
		&Contact::setFirstName, &Contact::setLastName, &Contact::setNickName,
		&Contact::setPhoneNumber, &Contact::setDarkestSecret };
    std::cout << "Please fill contact fields\n" ;
    for (int i = 0; i < 5; i++){
        std::string input;
        std::getline(std::cin, input);
        if (std::cin.eof()){
            exit(1);
        }
        *Contact::func[i](input);
    }
    // std::getline(std::cin, m_firstName);
    // if (std::cin.eof()) {
	// 	exit(1) ;
    // }
    // std::cout << "Last name : " ;
    // std::getline(std::cin, m_lastName);
    //  if (std::cin.eof()) {
	// 	exit(1) ;
    // }
    // std::cout << "Nickname : " ;
    // std::getline(std::cin, m_nickName);
    //  if (std::cin.eof()) {
	// 	exit(1) ;
    // }
    // std::cout << "PhoneNumber : " ;
    // std::getline(std::cin, m_phoneNumber);
    //  if (std::cin.eof()) {
	// 	exit(1) ;
    // }
    // std::cout << "DarkestSecret : " ;
    // std::getline(std::cin, m_darkestSecret);
    //  if (std::cin.eof()) {
	// 	exit(1) ;
    // }    if (!m_firstName.length() || !m_lastName.length() || !m_nickName.length() || !m_phoneNumber.length() || !m_darkestSecret.length()){
    //     return (false);
    // }
    // return (true);
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
    m_firstName = truncateStr(m_firstName);
    m_lastName  = truncateStr(m_lastName);
    m_nickName = truncateStr(m_nickName);
    std::cout << std::right;
    std::cout << std::setw(10) << m_firstName << sep;
    std::cout << std::setw(10) << m_lastName << sep;
    std::cout << std::setw(10) << m_nickName << std::endl;
}




