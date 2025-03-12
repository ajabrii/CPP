/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 10:38:49 by ajabri            #+#    #+#             */
/*   Updated: 2025/03/12 12:42:02 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "BitcoinExchange.hpp"

Btc::Btc()
{
}

Btc::Btc(const Btc& other)
{
    *this = other;
}

Btc::Btc(std::string infile, std::string DB)
{
    this->_infile = infile;
    this->_DB = DB;
}

Btc& Btc::operator=(const Btc& other)
{
    if (this != &other)
    {
        this->_infile = other._infile;
        this->_DB = other._DB;
    }
    return *this;
}

Btc::~Btc()
{
}

void Btc::DexLogs(std::string log)
{
    std::cerr << log << std::endl;
}

void Btc::OpenDBfile(std::ifstream& DB)
{
    DB.open(this->_DB.c_str());
    if (!DB.is_open()) {
        Btc::DexLogs(RED"ERROR : Can't open the DataBase"RES);
        return ;
    }
}

void Btc::OpenInfile(std::ifstream& inFile)
{
    inFile.open(this->_infile.c_str());
    if (!inFile.is_open()) {
        Btc::DexLogs(RED"ERROR : Can't open the input file"RES);
        return ;
    }
}

void Btc::ReadDB(std::ifstream& DB)
{
    std::string lineDB;
    std::string date, priceStr;
    float price;
    size_t commaPos;
    
    OpenDBfile(DB);
    while (std::getline(DB, lineDB))
    {
        commaPos = lineDB.find(',');
        if (commaPos == std::string::npos)
        {
            Btc::DexLogs(YELLOW"Warrning : Your DataBase is currupted"RES);
            break;
        }
        date = lineDB.substr(0, commaPos);
        priceStr = lineDB.substr(commaPos + 1);
        price = std::atof(priceStr.c_str());                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         
        dataBase[date] = price;
    }
    // for (std::map<std::string, float>::iterator it = dataBase.begin(); it != dataBase.end(); it++)
    // {
    //     std::cout << it->first << " ==> " << it->second << std::endl;
    // }
    DB.close();
}

void Btc::ReadinFile(std::ifstream& infile)
{
    std::string line;
    size_t Pos;
    
    OpenInfile(infile);
    while (std::getline(infile, line))
    {
        Pos = line.find('|');
        if (Pos == std::string::npos) {
            Btc::DexLogs(RED"Error: bad input ==> " + line + RES);
            continue;
        }
        parseData(line);
    }
    infile.close();
}

void Btc::parseData(std::string line)
{
    std::string date, priceStr;
    float price;
    int i = 0;
    while (line[i])
    {
        if (line[i] == '|')
        {
            date = line.substr(0, i);
            priceStr = line.substr(i + 1);
            price = std::atof(priceStr.c_str());
            std::cout << date << " ===> " << price << std::endl;
            if (price < MIN)
                Btc::DexLogs(RED"Error: not a positive number."RES);
            else if (price > MAX)
                Btc::DexLogs(RED"Error: too large a number."RES);
            dataInfile[date] = price; 
        }
        i++;
        
    }
    for (std::map<std::string, float>::iterator it = dataInfile.begin(); it != dataInfile.end(); it++)
    {
        std::cout << GREEN + it->first << " ==> " << it->second << RES << std::endl;
    }
}