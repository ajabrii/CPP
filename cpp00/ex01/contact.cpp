/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:42:36 by ajabri            #+#    #+#             */
/*   Updated: 2024/11/13 14:43:22 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contact.hpp"

int Contact::IsPrintable(std::string str) const {
    for (size_t i = 0; i < str.length(); i++) {
        if (!std::isprint((int)str[i])) {
          std::cout << "Non printable character found!" << std::endl;
            return 0;
        }
    }
    return 1;
}

bool Contact::SetContact() {
    std::cout << "Enter First Name: ";
    std::getline(std::cin, FirstName);
    if (!this->IsPrintable(FirstName))
        return false;
    std::cout << "Enter Last Name: ";
    std::getline(std::cin, LastName);
    if (!this->IsPrintable(LastName))
        return false;
    std::cout << "Enter Nickname: ";
    std::getline(std::cin, NickName);
    if (!this->IsPrintable(NickName))
        return false;
    std::cout << "Enter Phone Number: ";
    std::getline(std::cin, PhoneNumber);
    if (!this->IsPrintable(PhoneNumber))
        return false;
    std::cout << "Enter Darkest Secret: ";
    std::getline(std::cin, DarkestSecret);
   if (!this->IsPrintable(DarkestSecret))
        return false;
    return true;
}

void Contact::DisplayContact() const {
    std::cout << "First Name: " << FirstName << "\n"
              << "Last Name: " << LastName << "\n"
              << "Nickname: " << NickName << "\n"
              << "Phone Number: " << PhoneNumber << "\n"
              << "Darkest Secret: " << DarkestSecret << "\n";
}