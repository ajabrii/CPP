/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 16:57:21 by ajabri            #+#    #+#             */
/*   Updated: 2024/12/25 14:14:09 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

int main(void) {

    PhoneBook phonebook;
    
    while (true) {
        std::cout << PROMPT;
        std::getline(std::cin, phonebook.line);
        if (std::cin.eof()) {
            std::cout << "\n";
            break;
        } if (phonebook.line.empty() 
            || !phonebook.getcontact().IsPrintable(phonebook.line)) {
            continue;
        } else if (phonebook.line == ADD) {
            if (!phonebook.AddContacts()) {
                std::cout << "\n";
                break ;
            }
        } else if (phonebook.line == SEARCH) {
            if (!phonebook.SearchContacts()) {
                std::cout << "\n";
                break ;
            }
        } else if (phonebook.line == EXIT) {
            std::cout << LOGOUT_MSG;
            return (0);
        } else {
            std::cout << "\033[1;31mWrong `" << phonebook.line << "' is invalid command!\n\033[0m";
        }
    }
    return (0);
}
