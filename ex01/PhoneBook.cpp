
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
    this->contactId = 0;
    return;
}

PhoneBook::~PhoneBook(void) {
    return;
}

void    PhoneBook::add_contact(void) {
    this->contact[this->contactId % 8].set_first_name();
    this->contact[this->contactId % 8].set_last_name();
    this->contact[this->contactId % 8].set_nickname();
    this->contact[this->contactId % 8].set_phone_number();
    this->contact[this->contactId % 8].set_darkest_secret();
    std::cout << "Contact added to page " << this->contactId % 8 + 1 << std::endl;
    this->contactId++;
}

void    PhoneBook::search_contact(void) {
    std::string buf;
    int         pageToSearch;
    int         maxIndex;

    if (this->contactId > 8)
        maxIndex = 8;
    else
        maxIndex = this->contactId;
    if (maxIndex == 0) {
        std::cout << RED "Error: Empty phonebook!" NONE << std::endl;
        return;
    }
    print_all_contacts(maxIndex);
    while (std::cout << GREEN "Index to look up: " NONE) {
        std::getline(std::cin, buf);
        pageToSearch = buf.compare("0");
        if (buf.length() == 1 && pageToSearch > 0 && pageToSearch <= maxIndex)
            break;
        std::cerr << RED "Error: Non-existing index number!" NONE << std::endl;
    }
    this->contact[pageToSearch - 1].print_contact();
}

void    PhoneBook::print_all_contacts(int maxIndex) {
    std::cout << "|     index|first name| last name|  nickname|" << std::endl;
    for (int index = 0; index < maxIndex; index++) {
        std::cout << "|" << std::setw(10) << index + 1;
        this->print_field_abbr(index, FIRSTNAME);
        this->print_field_abbr(index, LASTNAME);
        this->print_field_abbr(index, NICKNAME);
        std::cout << "|" << std::endl;
    }
}

void    PhoneBook::print_field_abbr(int index, int fieldName) {
    std::cout << "|";
    if (this->contact[index].get_field_content(fieldName).length() <= 10)
        std::cout << std::setw(10) << this->contact[index].get_field_content(fieldName);
    else
        std::cout << this->contact[index].get_field_content(fieldName).substr(0, 9) << ".";
}
