/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 17:40:22 by ajabri            #+#    #+#             */
/*   Updated: 2024/12/24 15:01:50 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

int PhoneBook::AddContacts() {
    int ret;
    
    if (Index < MAX_CONTACT) {
        ret = contact[Index].Set();
        if (!ret)
            return 0;
        else if (ret == MT_NONP) {
            return (SUCCESS);
        }
        Index++;
    } else {
        
        ret = contact[oldIndex].Set();
        if (!ret)
            return 0;
        else if (ret == MT_NONP)
            return (SUCCESS);
        oldIndex = (oldIndex + 1) % MAX_CONTACT;
    }
    std::cout << ADD_MSG;
    return (SUCCESS);
}

std::string Fix(const std::string& str) {
    if (str.length() > 9) {
        return str.substr(0, 9) + ".";
    }
    return str;
}

int PhoneBook::SearchContacts() const{
    std::cout << std::setw(10) << "Index" << "|" 
              << "First Name" << "|"
              << "Last Name" << "|"
              << "Nick Name" << "|" << std::endl;
    std::cout << "----------------------------------------\n";
    for (int i = 0; i < Index; i++) {
        std::cout << std::setw(10) << i << "|"
                  << std::setw(10) << Fix(contact[i].GetFname()) << "|"
                  << std::setw(10) << Fix(contact[i].GetLname()) << "|"
                  << std::setw(10) << Fix(contact[i].GetNickname()) << "|" << std::endl;
    }
    std::cout << INDEX_PUT;
    std::string index;
    std::getline(std::cin, index);
    if (std::cin.eof())
        return CTRLD;
    if (!isdigit(index[0])) {
        std::cout << INDEX_ERR;
        return SUCCESS;
    }
    if (atoi(index.c_str()) >= 0 && atoi(index.c_str()) < Index)
        contact[atoi(index.c_str())].Display();
    else
        std::cout << INDEX_ERR;    
    return SUCCESS;
}