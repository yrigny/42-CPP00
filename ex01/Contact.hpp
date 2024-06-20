#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

# define GREEN "\033[1;32m"
# define RED "\033[1;31m"
# define NONE "\033[0m"

class Contact
{
    private:
        std::string firstName;
        std::string lastName;
        std::string nickname;
        std::string phoneNumber;
        std::string darkestSecret;

    public:
        Contact(void);
        ~Contact(void);

    public:
        void        set_first_name(void);
        void        set_last_name(void);
        void        set_nickname(void);
        void        set_phone_number(void);
        void        set_darkest_secret(void);
};

#endif