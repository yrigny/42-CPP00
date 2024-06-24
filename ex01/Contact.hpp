
#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

# define GREEN "\033[1;32m"
# define RED "\033[1;31m"
# define NONE "\033[0m"
# define FIRSTNAME 1
# define LASTNAME 2
# define NICKNAME 3
# define PHONENUMBER 4
# define DARKESTSECRET 5

class Contact {

    private:

        std::string firstName;
        std::string lastName;
        std::string nickname;
        std::string phoneNumber;
        std::string darkestSecret;

        bool        valid_input(std::string str);

    public:

        Contact(void);
        ~Contact(void);

        void        set_first_name(void);
        void        set_last_name(void);
        void        set_nickname(void);
        void        set_phone_number(void);
        void        set_darkest_secret(void);
        std::string get_field_content(int fieldName) const;
        void        print_contact(void) const;
};

#endif
