
#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iomanip>
# include "Contact.hpp"

class PhoneBook {

    private:
    
        static const int    numPages = 8;
        int                 contactId;
        Contact             contact[numPages];

    public:

        PhoneBook(void);
        ~PhoneBook(void);

        void    add_contact(void);
        void    search_contact(void);
        void    print_all_contacts(int lastPage);
        void    print_field_abbr(int index, int fieldName);
};

#endif
