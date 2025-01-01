/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 11:13:11 by ajabri            #+#    #+#             */
/*   Updated: 2024/12/28 16:06:09 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#  include <iostream>


int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;
    
    std::cout << "____Adresses____\n";
    std::cout << "The memory address of the string variable: " << "\033[1;32m"<< &str << "\033[0m" << std::endl;
    std::cout << "The memory address held by stringPTR: " << "\033[1;31m" << stringPTR <<"\033[0m" << std::endl;
    std::cout << "The memory address held by stringREF: " << "\033[1;33m"<< &stringREF << "\033[0m" << std::endl;
    std::cout << "____Values_____\n";
    std::cout << "The Value of the string variable: " << str << std::endl;
    std::cout << "The Value held by stringPTR: " << *stringPTR << std::endl;
    std::cout << "The Value held by stringREF: " << stringREF << std::endl;
    
}