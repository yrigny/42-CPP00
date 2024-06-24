/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrigny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 18:20:44 by yrigny            #+#    #+#             */
/*   Updated: 2024/06/24 18:20:46 by yrigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
