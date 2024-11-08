/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:26:13 by kali              #+#    #+#             */
/*   Updated: 2024/11/08 14:47:24 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone.hpp"

int main() {
    PhoneBook phoneBook;
    std::string command;

    while (true) {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, command);
        if (std::cin.eof())
            break;
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

//! check the contact info if it's empty or not if it's empty it will display "EMPTY" else it will display the contact info
//!check why when i enter the index number it displays command not found.
//