/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:26:37 by kali              #+#    #+#             */
/*   Updated: 2024/11/09 14:08:34 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone.hpp"

void Contact::SetContact() {
    std::cout << "Enter First Name: ";
    std::getline(std::cin, FirstName);
    std::cout << "Enter Last Name: ";
    std::getline(std::cin, LastName);
    std::cout << "Enter Nickname: ";
    std::getline(std::cin, NickName);
    std::cout << "Enter Phone Number: ";
    std::getline(std::cin, PhoneNumber);
    std::cout << "Enter Darkest Secret: ";
    std::getline(std::cin, DarkestSecret);
}

void Contact::DisplayContact() const {
    std::cout << "First Name: " << FirstName << "\n"
              << "Last Name: " << LastName << "\n"
              << "Nickname: " << NickName << "\n"
              << "Phone Number: " << PhoneNumber << "\n"
              << "Darkest Secret: " << DarkestSecret << "\n";
}

void PhoneBook::AddContact() {
    if (NumContacts < 8) {
        Contacts[NumContacts].SetContact();
        NumContacts++;
    } else {
        Contacts[OldestIndex].SetContact();
        OldestIndex = (OldestIndex + 1) % 8;
    }
    std::cout << "Contact added successfully!\n";
}

void PhoneBook::SearchContacts() const {
    std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << std::endl;
    std::cout << "---------------------------------------------" << std::endl;
    for (int i = 0; i < NumContacts; i++) {
        std::cout << std::setw(10) << i << "|"
                  << std::setw(10) << Contacts[i].GetFirstName() << "|"
                  << std::setw(10) << Contacts[i].GetLastName() << "|"
                  << std::setw(10) << Contacts[i].GetNickName() << std::endl;
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
