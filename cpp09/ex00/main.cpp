/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 10:31:52 by ajabri            #+#    #+#             */
/*   Updated: 2025/03/12 12:27:30 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "BitcoinExchange.hpp"


int main(int ac , char **av)
{
    if (ac != 2) {
        Btc::DexLogs(YELLOW"WARNING : Usage -> ./btc [you input file]"RES);
        return 1;
    }
    
    std::ifstream inFile;
    std::ifstream DataBase;
    Btc satoshi(av[1], "data.csv");
    satoshi.ReadDB(DataBase);
    satoshi.ReadinFile(inFile);
}