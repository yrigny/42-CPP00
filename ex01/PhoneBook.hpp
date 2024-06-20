#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include "Contact.hpp"

# define GREEN "\033[1;32m"
# define RED "\033[1;31m"
# define NONE "\033[0m"

class PhoneBook {
    private:
        static const int    numPages = 8;
        int                 contactId;
        Contact             contact[numPages];
    public:
        PhoneBook(void);
        ~PhoneBook(void);
    public:
        void    add_contact(void);
        void    search_contact(void);
};


#endif