/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 14:09:47 by ajabri            #+#    #+#             */
/*   Updated: 2024/12/29 10:57:03 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Replace.hpp"

int main(int ac, char **av)
{
    // Replace replace;
    std::ifstream inFile;
    std::ofstream outFile;
    if (ac != 4) {
        std::cout << "Usage: ./replace filename s1 s2\n";
        return (1);
    }
    Replace replace(av[1], av[2], av[3]);
    replace.OpenInFile(inFile);
    if (replace.returnCode)
        return (replace.returnCode);
    replace.OpenOutFile(outFile);
    replace.ReplaceContent(inFile, outFile);
    return (replace.returnCode);
}
