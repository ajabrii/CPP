/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 21:04:22 by ajabri            #+#    #+#             */
/*   Updated: 2024/10/25 22:08:28 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CPP
# define PHONEBOOK_CPP

#define RED     "\033[1;31m"
#define GREEN   "\033[1;32m"
#define YELLOW  "\033[1;33m"
#define BLUE    "\033[1;34m"
#define MAGENTA "\033[1;35m"
#define CYAN    "\033[1;36m"
#define WHITE   "\033[1;37m"
#define RES     "\033[0m"

# include <iostream>

class Contact {
    public:
        std::string FirstName;
        std::string LastName;
        std::string NickName;
        std::string DarkestSecret;
        std::string PhoneNumber;
};


class PhoneBook {
    // private:
        Contact Contacts[8];
    public:
        void SetContact(int &Index);
    
};

# endif