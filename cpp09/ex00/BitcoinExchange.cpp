/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 10:38:49 by ajabri            #+#    #+#             */
/*   Updated: 2025/03/16 14:06:02 by ajabri           ###   ########.fr       */
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
    DB.close();
}

void Btc::ReadinFile(std::ifstream& infile)
{
    std::string line, date, priceStr;
    float price;
    size_t Pos;
    
    OpenInfile(infile);
    while (std::getline(infile, line))
    {
        Pos = line.find('|');
        if (Pos == std::string::npos) {
            Btc::DexLogs(RED"Error: bad input ==> " + line + RES);
            continue;
        }
        date = line.substr(0, Pos);
        priceStr = line.substr(Pos + 1);
        price = std::atof(priceStr.c_str());
        if (price < MIN) {
            Btc::DexLogs(RED"Error: not a positive number."RES);
            continue;   
        }
        else if (price > MAX) {
            Btc::DexLogs(RED"Error: too large a number."RES);
            continue;   
        }
        parseData(date, price);
    }
    infile.close();
}

std::string Btc::Trim(std::string& str)
{
      size_t first = 0;
    while (first < str.length() && isspace(str[first])) {
        first++;
    }
    
    size_t last = str.length();
    while (last > first && isspace(str[last - 1])) {
        last--;
    }
    
    return str.substr(first, last - first);
}

bool Btc::isDigit(std::string str)
{
    for (size_t i = 0; i < str.length(); i++)   {
        if (!isdigit(str[i]))
            return false;
    }
    return true;
}

bool Btc::processDate(std::string date)
{
    std::string year, month, day;
    
    size_t pos = date.find('-');
    if (pos == std::string::npos) {
        Btc::DexLogs(RED"Error: bad date format."RES);
        return false;
    }
    year = date.substr(0, pos);
    year = Trim(year);
    if (!isDigit(year)) {
        DexLogs(RED"Error: Invalide year format!"RES);
        return false;
    }
    date = date.substr(pos + 1);
    pos = date.find('-');
    if (pos == std::string::npos) {
        Btc::DexLogs(RED"Error: bad date format."RES);
        return false;
    }
    month = date.substr(0, pos);
    month = Trim(month);
    day = date.substr(pos + 1);
    day = Trim(day);
    if (year.size() != 4 || month.size() != 2 || day.size() != 2) {
        Btc::DexLogs(RED"Error: bad date format."RES);
        return false;
    }
    if (std::atoi(month.c_str()) > 12 || std::atoi(month.c_str()) < 1) {
        Btc::DexLogs(RED"Error: bad month."RES);
        return false;
    }
    if (std::atoi(day.c_str()) > 31 || std::atoi(day.c_str()) < 1) {
        Btc::DexLogs(RED"Error: bad day."RES);
        return false;
    }
    if (std::atoi(month.c_str()) == 2 && std::atoi(day.c_str()) > 29) {
        Btc::DexLogs(RED"Error: bad day."RES);
        return false;
    }
    if ((std::atoi(month.c_str()) == 4 || std::atoi(month.c_str()) == 6 
            || std::atoi(month.c_str()) == 9 
            || std::atoi(month.c_str()) == 11) && std::atoi(day.c_str()) > 30) {
        Btc::DexLogs(RED"Error: bad day."RES);
        return false;
    }
    return true;
}

void Btc::parseData(std::string date, float p)
{
    if (!processDate(date))
        return;
    std::string closestDate = findClosestLowerDate(date);
    if (closestDate.empty()) {
        DexLogs(RED "Error: no valid date found in database." RES);
        return;
    }

    float exchangeRate = dataBase[closestDate];
    float result = p * exchangeRate;

    std::cout << closestDate << " => " << p << " = " << result << std::endl;
}

std::string Btc::findClosestLowerDate(const std::string& date)
{
    std::map<std::string, float>::iterator it = dataBase.lower_bound(date);
    if (it == dataBase.end() || it->first != date) {
        if (it == dataBase.begin()) return "";
        --it;
    }
    return it->first;
}
