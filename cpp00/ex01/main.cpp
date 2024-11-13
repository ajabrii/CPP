/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:26:13 by kali              #+#    #+#             */
/*   Updated: 2024/11/13 14:46:17 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

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
        } else if (command.empty())
                continue;
        else {
            std::cout << "Invalid command! `"<< command << "'" << std::endl;
        }
    }
    return 0;
}

//TODO: i need to set a header file for each class

//@DONE:  check the contact info if it's empty or not if it's empty it will display "EMPTY" else it will display the contact info
//@ DONE : check why when i enter the index number it displays command not found.
//@DONE: fix when the contact are more than test it