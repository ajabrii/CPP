/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 21:26:43 by ajabri            #+#    #+#             */
/*   Updated: 2024/10/25 22:19:37 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "phoneBook.hpp"

int main(void)
{
    PhoneBook PhB;
    int Index;

    Index = 0;
    std::string cmd;
    while (1)
    {
        std::cout << GREEN"Enter one of three commands (ADD, SEARCH, EXIT):: \033[0m";
        getline(std::cin, cmd);
        if (cmd == "ADD")
        {
            PhB.SetContact(Index);
            Index++;
        }
        else if (cmd == "SEARCH")
        {
            // PhB.GetContacts();
            std::cout << "Index | First Name | Last Name | Nickname\n";
            std::cout << Index << "|" << PhB.Contacts[Index].FirstName << "|" << PhB.Contacts[Index].LastName << "|" << PhB.Contacts[Index].NickName << "\n";
            // std:: cout << "I enter EXIT\n";
        }
        else if (cmd == "EXIT")
        {
            // std:: cout << "I enter EXIT\n";
            return (0);
        }
    }
    return (0);
}


// int main()
// {
//     std::string s;
//     // std::cin >> s;
//     getline(std::cin, s);
//     std::cout << s << "\n";
// }