/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:39:22 by ajabri            #+#    #+#             */
/*   Updated: 2024/11/13 14:40:06 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Contact {
    private:
        std::string FirstName;
        std::string LastName;
        std::string NickName;
        std::string PhoneNumber;
        std::string DarkestSecret;

    public:
        bool SetContact();// had l function can set the contact info
        void DisplayContact() const;// hadi it just displays the infos and //!const means bli it can't modify the class members
        //*those are getters :
        std::string GetFirstName() const { return FirstName; }
        std::string GetLastName() const { return LastName; }
        std::string GetNickName() const { return NickName; }
        int IsPrintable(std::string str) const;
};

# endif