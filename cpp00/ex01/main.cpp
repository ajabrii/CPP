/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:26:13 by kali              #+#    #+#             */
/*   Updated: 2024/11/06 14:57:01 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone.hpp"

int main() {
    PhoneBook phoneBook;
    std::string command;

    while (true) {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, command);

        if (command == "ADD") {
            phoneBook.AddContact();
        } else if (command == "SEARCH") {
            phoneBook.SearchContacts();
        } else if (command == "EXIT") {
            std::cout << "Exiting... Contacts will be lost!" << std::endl;
            break;
        } else {
            std::cout << "Invalid command!" << std::endl;
        }
    }

    return 0;
}

