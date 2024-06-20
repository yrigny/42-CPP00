#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
    this->contactId = 0;
    return ;
}

PhoneBook::~PhoneBook(void) {
    return ;
}

void    PhoneBook::add_contact(void) {
    this->contact[contactId % 8].set_first_name();
    this->contact[contactId % 8].set_last_name();
    this->contact[contactId % 8].set_nickname();
    this->contact[contactId % 8].set_phone_number();
    this->contact[contactId % 8].set_darkest_secret();
    std::cout << "Contact added to page " << contactId % 8 + 1 << std::endl;
    this->contactId++;
}

void    PhoneBook::search_contact(void) {
    std::string buf;

    std::cout << "Page number: ";
    while (std::getline(std::cin, buf)) {
        
    }
}