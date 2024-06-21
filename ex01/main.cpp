
#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(void) {
    PhoneBook   book;
    std::string cmd;

    while (std::cout << GREEN "Choose command: ADD / SEARCH / EXIT" NONE << std::endl) {
        std::getline(std::cin, cmd);
        if (cmd == "EXIT")
            return 0;
        else if (cmd == "ADD")
            book.add_contact();
        else if (cmd == "SEARCH")
            book.search_contact();
        else
            std::cerr << RED "Error: Command not found!" NONE << std::endl;
    }
    return 0;
}
