/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 14:09:47 by ajabri            #+#    #+#             */
/*   Updated: 2024/11/11 12:09:02 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Replace.hpp"

int main(int ac, char **av)
{
    Replace replace;
    std::ifstream inFile;
    std::ofstream outFile;
    (void)av;
    if (ac != 4)
    {
        replace.ThrowError("Usage: ./replace filename s1 s2");
        return (1);
    }
    replace = Replace(av[1], av[2], av[3]);
    replace.OpenInFile(inFile);
    replace.OpenOutFile(outFile);
    replace.ReplaceContent(inFile, outFile);
    return (replace.returnCode);
}

//* I will create a class that have all the vars and methods needed to replace the string s1 by s2 in the file filename
//
//     std::string filename = av[1];
//     std::string s1 = av[2];
//     std::string s2 = av[3];
//     std::ifstream inFile(filename);
//     if (!inFile.is_open())
//     {
//         std::cout << "Error: could not open file" << std::endl;
//         return (1);
//     }
//     std::string line;

//     line = filename + ".replace";
//     std::ofstream outFile(line);
//     if (!outFile.is_open())
//     {        
//         std::cout << "Error: could not create file" << std::endl;
//         return (1);
//     }
//     std::string content((std::istreambuf_iterator<char>(inFile)), std::istreambuf_iterator<char>());
//     outFile << content;
//     // std::getline(inFile, line, '\0');