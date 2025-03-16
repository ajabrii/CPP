/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 10:31:56 by ajabri            #+#    #+#             */
/*   Updated: 2025/03/16 13:58:45 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef BitcoinExchange_Hpp
# define BitcoinExchange_Hpp

# include <iostream>
# include <fstream>
# include <string>
#include <cstdlib>
# include <map>
#define MIN 0
#define MAX 1000 
#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define YELLOW "\033[1;33m"
#define RES "\033[0m"


class Btc
{
    private:
        std::string _infile;
        std::string _DB;
        std::map<std::string, float> dataBase;
    public:
        Btc();
        Btc(std::string infile, std::string DB);
        Btc(const Btc& other);
        Btc& operator=(const Btc& other);
        ~Btc();
        static void DexLogs(std::string log);
        void OpenDBfile(std::ifstream& DB);
        void ReadDB(std::ifstream& DB);
        void OpenInfile(std::ifstream& inFile);
        void ReadinFile(std::ifstream& inFile);
        std::string findClosestLowerDate(const std::string& date);
        void parseData(std::string date, float p);
        bool processDate(std::string date);
        std::string Trim(std::string& str);
        bool isDigit(std::string str);
};

# endif