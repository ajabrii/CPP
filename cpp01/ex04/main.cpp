/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 14:09:47 by ajabri            #+#    #+#             */
/*   Updated: 2024/11/10 14:42:31 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Replace.hpp"
# include <iostream>
# include <fstream>
# include <string>

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "Usage: ./replace filename s1 s2" << std::endl;
        return (1);
    }
    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];
    std::ifstream inFile(filename);
    if (!inFile.is_open())
    {
        std::cout << "Error: could not open file" << std::endl;
        return (1);
    }
    std::string line;

    line = filename + ".replace";
    std::ofstream outFile(line);
     std::string content((std::istreambuf_iterator<char>(inFile)), std::istreambuf_iterator<char>());
     outFile << content;
    // std::getline(inFile, line, '\0');
}