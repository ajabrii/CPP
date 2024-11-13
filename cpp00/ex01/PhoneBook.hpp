/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:27:23 by kali              #+#    #+#             */
/*   Updated: 2024/11/13 14:41:05 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_HPP
#define PHONE_HPP

# include "Contact.hpp"

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
