/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 17:01:26 by ajabri            #+#    #+#             */
/*   Updated: 2024/12/25 13:40:22 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_HPP
#define CONTACTS_HPP

# define FIRST_NAME "\033[1;33mEnter First Name: \033[0m"
# define LAST_NAME "\033[1;33mEnter Last Name: \033[0m"
# define NICK_NAME "\033[1;33mEnter Nick Name: \033[0m"
# define PHONE_NUM "\033[1;33mEnter Phone Number: \033[0m"
# define DARK_SECRET "\033[1;33mEnter Dark secret: \033[0m"
# define NON_PRINTABLE "\033[1;31mNon printable character found!\033[0m"
# define  EMPTY_MSG "\033[1;31Empty input!\n\033[0m"
# define CTRLD 0
#define MT_NONP -1
# define SUCCESS 1


class Contact {

    private:
        std::string FirstName;
        std::string LastName;
        std::string NickName;
        std::string PhoneNumber;
        std:: string DarkSecret;
    public:
        int Set();
        std::string GetFname() const { return FirstName; };
        std::string GetLname() const { return LastName; };
        std::string GetNickname() const { return NickName; };
        void Display() const;
        int IsPrintable(std::string str) const;

};

#endif