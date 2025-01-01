/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 16:57:54 by ajabri            #+#    #+#             */
/*   Updated: 2024/12/25 14:25:58 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip> 
#include <cstdlib>
#include "Contacts.hpp"
# define MAX_CONTACT 8
# define ADD "ADD"
# define SEARCH "SEARCH"
#define EXIT "EXIT"
#define PROMPT "\033[1;36mEnter one of three commands (ADD, SEARCH, EXIT): \033[0m"
# define LOGOUT_MSG "\033[1;31mBy exiting you will lose all your contacts ...\n\033[0m"
# define ADD_MSG "\033[1;32mContact added successfully!\n\033[0m"
# define INDEX_PUT "\033[1;36mEnter the index of the contact to view details: \033[0m"
# define INDEX_ERR "\033[1;31mInvalid index!\n\033[0m"

class PhoneBook {

    private:
        Contact contact[MAX_CONTACT];
        int Index;
        int oldIndex;
    public:
        PhoneBook() {
            Index = 0;
            oldIndex = 0;
        }
        int AddContacts();
        int SearchContacts() const;
        Contact getcontact() const { return contact[0]; };
        std::string line;
        
};

#endif