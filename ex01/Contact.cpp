
#include "Contact.hpp"

Contact::Contact(void) {
    return;
}

Contact::~Contact(void) {
    return;
}

bool    Contact::valid_input(std::string str) {
    for (unsigned long i = 0; i < str.length(); i++) {
        if (!isprint(str[i]))
            return false;
    }
    return true;
}

void    Contact::set_first_name(void) {
    while (std::cout << GREEN "First name: " NONE) {
        std::getline(std::cin, this->firstName);
        if (!this->firstName.empty() && this->valid_input(this->firstName))
            break;
        if (this->firstName.empty())
            std::cerr << RED "Error: Empty field!" NONE << std::endl;
        else if (!this->valid_input(this->firstName))
            std::cerr << RED "Error: Non-printable character!" NONE << std::endl;
    }
}

void    Contact::set_last_name(void) {;
    while (std::cout << GREEN "Last name: " NONE) {
        std::getline(std::cin, this->lastName);
        if (!this->lastName.empty() && this->valid_input(this->lastName))
            break;
        if (this->lastName.empty())
            std::cerr << RED "Error: Empty field!" NONE << std::endl;
        else if (!this->valid_input(this->lastName))
            std::cerr << RED "Error: Non-printable character!" NONE << std::endl;
    }
}

void    Contact::set_nickname(void) {
    while (std::cout << GREEN "Nickname: " NONE) {
        std::getline(std::cin, this->nickname);
        if (!this->nickname.empty() && this->valid_input(this->nickname))
            break;
        if (this->nickname.empty())
            std::cerr << RED "Error: Empty field!" NONE << std::endl;
        else if (!this->valid_input(this->nickname))
            std::cerr << RED "Error: Non-printable character!" NONE << std::endl;
    }
}

void    Contact::set_phone_number(void) {
    while (std::cout << GREEN "Phone number: " NONE) {
        std::getline(std::cin, this->phoneNumber);
        if (!this->phoneNumber.empty() && this->valid_input(this->phoneNumber))
            break;
        if (this->phoneNumber.empty())
            std::cerr << RED "Error: Empty field!" NONE << std::endl;
        else if (!this->valid_input(this->phoneNumber))
            std::cerr << RED "Error: Non-printable character!" NONE << std::endl;
    }
}

void    Contact::set_darkest_secret(void) {
    while (std::cout << GREEN "Darkest secret: " NONE) {
        std::getline(std::cin, this->darkestSecret);
        if (!this->darkestSecret.empty() && this->valid_input(this->darkestSecret))
            break;
        if (this->darkestSecret.empty())
            std::cerr << RED "Error: Empty field!" NONE << std::endl;
        else if (!this->valid_input(this->darkestSecret))
            std::cerr << RED "Error: Non-printable character!" NONE << std::endl;
    }
}

std::string Contact::get_field_content(int fieldName) {
    if (fieldName == FIRSTNAME)
        return this->firstName;
    if (fieldName == LASTNAME)
        return this->lastName;
    if (fieldName == NICKNAME)
        return this->nickname;
    if (fieldName == PHONENUMBER)
        return this->phoneNumber;
    return this ->darkestSecret;
}

void    Contact::print_contact(void) {
    std::cout << "First name    : " << this->get_field_content(FIRSTNAME) << std::endl;
    std::cout << "Last name     : " << this->get_field_content(LASTNAME) << std::endl;
    std::cout << "Nickname      : " << this->get_field_content(NICKNAME) << std::endl;
    std::cout << "Phone number  : " << this->get_field_content(PHONENUMBER) << std::endl;
    std::cout << "Darkest secret: " << this->get_field_content(DARKESTSECRET) << std::endl;
}