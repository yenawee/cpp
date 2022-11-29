#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook(void){
    m_size = 0;
}

PhoneBook::~PhoneBook(void){
    std::cout << "PhoneBook destroyed" << std::endl;
}

void PhoneBook::addContact(){
    Contact contact;
    if (!contact.fillInfo()){
        std::cout << "Fill All Info !!" << std::endl;
        return ;
    }
    int index = m_size;
    if (m_size > 7){
        index = m_size % MAX;
    }
    m_contacts[index] = contact;
    m_size++;
}

void PhoneBook::display(void){
    if (!m_size){
        std::cout << "No Contact Informations!! Please fill out contact informations." << std::endl;
        return ;
    }
    int size = (m_size > MAX) ? MAX : m_size;
    displayAll();
    while (true){
        std::string input;
        std::cout << "Enter a index (0~" << size - 1 << ") " << std::endl;
        std::cout << "(Enter \"Q\" to exit)" << std::endl;
        std::getline(std::cin, input);
        if (std::cin.eof() || !input.compare("Q")){
            break ;
        }
        if (input.length() > 1 || input[0] - '0' < 0 || input[0] - '0' > m_size - 1){
            std::cout << "Enter a correct index !!!!" << std::endl;
        }
        else {
            displayIndex(input[0] - '0');
        }
    }
}

void PhoneBook::displayAll(void){
    char sep = '|';
    std::cout << "   Index  " <<  " First Name " << " Last Name " << " Nickname " << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
    std::cout << std::right;
    int size = (m_size > MAX) ? MAX : m_size;
    for (int i = 0; i < size; i++){
        std::cout << std::setw(10) << i << sep;
        m_contacts[i].show();
    }
}

void PhoneBook::displayIndex(int index){
    char sep = '|';
    std::cout << "   Index  " <<  " First Name " << " Last Name " << " Nickname " << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
    std::cout << std::setw(10) << std::right;
    std::cout << index << sep;
    m_contacts[index].show();
}