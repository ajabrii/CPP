/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:27:23 by kali              #+#    #+#             */
/*   Updated: 2024/11/13 14:07:52 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_HPP
#define PHONE_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Contact {
    private:
        std::string FirstName;
        std::string LastName;
        std::string NickName;
        std::string PhoneNumber;
        std::string DarkestSecret;

    public:
        bool SetContact();// had l function can set the contact info
        void DisplayContact() const;// hadi it just displays the infos and //!const means bli it can't modify the class members
        //*those are getters :
        std::string GetFirstName() const { return FirstName; }
        std::string GetLastName() const { return LastName; }
        std::string GetNickName() const { return NickName; }
        int IsPrintable(std::string str) const;
};

class PhoneBook {
    private:
        Contact Contacts[8];
        int NumContacts;
        int OldestIndex;

    public:
        PhoneBook() : NumContacts(0), OldestIndex(0) {} // ?Constructor init had l vars when the phonebook object is created
        void AddContact();
        void SearchContacts() const;
};

#endif
