/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Setters_Getters.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 22:01:32 by ajabri            #+#    #+#             */
/*   Updated: 2024/10/25 22:22:51 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "phoneBook.hpp"

void PhoneBook::SetContact(int &Index) {
    if (Index >= 8)
        std::cout << RED"The PhoneBook is Full" << RES << "\n";
    std::cout << CYAN"\tEnter First Name:: " << RES;
    getline(std::cin, Contacts[Index].FirstName);
    std::cout << CYAN"\tEnter Last Name:: " << RES;
    getline(std::cin, Contacts[Index].LastName);
    std::cout << CYAN"\tEnter Nick Name:: " << RES;
    getline(std::cin, Contacts[Index].NickName);
    std::cout << CYAN"\tEnter Phone Number:: " << RES;
    getline(std::cin, Contacts[Index].PhoneNumber);
    std::cout << CYAN"\tEnter Darkest Secret:: " << RES;
    getline(std::cin, Contacts[Index].DarkestSecret);
    Index++;
}

// void GetContacts(int Index)
// {
//     std::
// }