#include "Contact.hpp"

Contact::Contact(void) {
    return;
}

Contact::~Contact(void) {
    return;
}

void    Contact::set_first_name(void) {
    std::cout << GREEN "First name: " NONE;
    while (std::getline(std::cin, this->firstName)) {
        if (!this->firstName.empty())
            break ;
        std::cerr << RED "Error: Empty field!" NONE << std::endl;
        std::cout << GREEN "First name: " NONE;
    }
}

void    Contact::set_last_name(void) {
    std::cout << GREEN "Last name: " NONE;
    while (std::getline(std::cin, this->lastName)) {
        if (!this->lastName.empty())
            break ;
        std::cerr << RED "Error: Empty field!" NONE << std::endl;
        std::cout << GREEN "Last name: " NONE;
    }
}

void    Contact::set_nickname(void) {
    std::cout << GREEN "Nickname: " NONE;
    while (std::getline(std::cin, this->nickname)) {
        if (!this->nickname.empty())
            break ;
        std::cerr << RED "Error: Empty field!" NONE << std::endl;
        std::cout << GREEN "Nickname: " NONE;
    }
}

void    Contact::set_phone_number(void) {
    std::cout << GREEN "Phone number: " NONE;
    while (std::getline(std::cin, this->phoneNumber)) {
        if (!this->phoneNumber.empty())
            break ;
        std::cerr << RED "Error: Empty field!" NONE << std::endl;
        std::cout << GREEN "Phone number: " NONE;
    }
}

void    Contact::set_darkest_secret(void) {
    std::cout << GREEN "Darkest secret: " NONE;
    while (std::getline(std::cin, this->darkestSecret)) {
        if (!this->darkestSecret.empty())
            break ;
        std::cerr << RED "Error: Empty field!" NONE << std::endl;
        std::cout << GREEN "Darkest secret: " NONE;
    }
}