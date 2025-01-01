/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 17:48:16 by ajabri            #+#    #+#             */
/*   Updated: 2024/12/25 13:30:23 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

int Contact::Set() {
    std::string tmp;
    while (true) {
        std::cout << FIRST_NAME;
        std::getline(std::cin, tmp);
        if (std::cin.eof()) 
            return CTRLD;
        if (tmp.empty()) {
            std::cout << EMPTY_MSG;
        } else if (!IsPrintable(tmp))
            continue;
        else 
            break;
    }
    FirstName = tmp;
    while (true) {
        std::cout << LAST_NAME;
        std::getline(std::cin, tmp);
        if (std::cin.eof())
            return CTRLD;
        if (tmp.empty()) {
            std::cout << EMPTY_MSG;
        } else if (!IsPrintable(tmp))
            continue;
        else
            break;
    }
    LastName = tmp;
    while (true) {
        std::cout << NICK_NAME;
        std::getline(std::cin, tmp);
        if (std::cin.eof())
            return CTRLD;
        if (tmp.empty()) {
            std::cout << EMPTY_MSG;
        } else if (!IsPrintable(tmp))
            continue ;
        else
            break;
    }
    NickName = tmp;
    while (true) {
        std::cout << PHONE_NUM;
        std::getline(std::cin, tmp);
        if (std::cin.eof())
            return CTRLD;
        if (tmp.empty()) {
            std::cout << EMPTY_MSG;
        } else if (!IsPrintable(tmp))
            continue;
        else
            break;
    }
    PhoneNumber = tmp;
    while (true) {
        std::cout << DARK_SECRET;
        std::getline(std::cin, tmp);
        if (std::cin.eof())
        return CTRLD;
        if (tmp.empty()) {
            std::cout << EMPTY_MSG;
        } else if (!IsPrintable(tmp))
            continue;
        else
            break;
    }
    DarkSecret = tmp;
    return SUCCESS;
}

void Contact::Display() const {
    std::cout << "First Name: " << FirstName << "\n"
              << "Last Name: " << LastName << "\n"
              << "Nickname: " << NickName << "\n"
              << "Phone Number: " << PhoneNumber << "\n"
              << "Darkest Secret: " << DarkSecret << "\n";
}


int Contact::IsPrintable(std::string str) const {
    for (size_t i = 0; i < str.length(); i++) {
        if (!std::isprint((int)str[i])) {
          std::cout << NON_PRINTABLE << std::endl;
            return 0;
        }
    }
    return 1;
}