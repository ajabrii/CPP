/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:26:37 by kali              #+#    #+#             */
/*   Updated: 2024/11/13 14:43:33 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::AddContact() {
    if (NumContacts < 8) {
        if (!Contacts[NumContacts].SetContact())
            return ;
        NumContacts++;
    } else {
        Contacts[OldestIndex].SetContact();
        OldestIndex = (OldestIndex + 1) % 8;
    }
    std::cout << "Contact added successfully!\n";
}

std::string TruncateString(const std::string& str) {
    if (str.length() > 9) {
        return str.substr(0, 9) + ".";
    }
    return str;
}

void PhoneBook::SearchContacts() const {
    std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << std::endl;
    std::cout << "---------------------------------------------" << std::endl;

    for (int i = 0; i < NumContacts; i++) {
        std::cout << std::setw(10) << i << "|"
                  << std::setw(10) << TruncateString(Contacts[i].GetFirstName()) << "|"
                  << std::setw(10) << TruncateString(Contacts[i].GetLastName()) << "|"
                  << std::setw(10) << TruncateString(Contacts[i].GetNickName()) << std::endl;
    }

    std::cout << "Enter the index of the contact to view details: ";
    std::string index;

    std::getline(std::cin, index);
    if (std::cin.eof())
        return;
    if (!isdigit(index[0])) {
        std::cout << "Invalid index!" << std::endl;
        return;
    }
    if (std::atoi(index.c_str()) >= 0 && std::atoi(index.c_str()) < NumContacts) {
        Contacts[std::atoi(index.c_str())].DisplayContact();
    } else {
        std::cout << "Invalid index!" << std::endl;
    }
}
