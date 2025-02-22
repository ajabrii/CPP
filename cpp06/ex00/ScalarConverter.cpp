/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 09:33:03 by ajabri            #+#    #+#             */
/*   Updated: 2025/02/22 18:24:16 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScalarConverter.hpp"

ScalarConverter::ScalarTypes ScalarConverter::types;
Tflag ScalarConverter::WitchType;
ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter& other)
{
    *this = other;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other)
{
    (void)other;
    return *this;
}

ScalarConverter::~ScalarConverter()
{
}

void ScalarConverter::convertChar(std::string literal)
{
    types.c = literal[0];
    types.num = static_cast<int>(types.c);
    types.f = static_cast<float>(types.c);
    types.d = static_cast<double>(types.c);
    printChar();
}

void ScalarConverter::convertInt(std::string literal)
{
    types.num = std::atoi(literal.c_str());
    types.c = static_cast<char>(types.num);
    types.f = static_cast<float>(types.num);
    types.d = static_cast<double>(types.num);
    printInt();
}

void ScalarConverter::convertFloat(std::string literal)
{
    types.f = std::atof(literal.c_str());
    types.c = static_cast<char>(types.f);
    types.num = static_cast<int>(types.f);
    types.d = static_cast<double>(types.f);
    printFloat();
}

void ScalarConverter::convertDouble(std::string literal)
{
    types.d = std::atof(literal.c_str());
    types.c = static_cast<char>(types.d);
    types.num = static_cast<int>(types.d);
    types.f = static_cast<float>(types.d);
    printDouble();
}

void ScalarConverter::setFlag(std::string literal)
{
    if (literal.length() == 1 && std::isprint(literal[0]) && !std::isdigit(literal[0]))
        ScalarConverter::WitchType = CHAR;
    else if (literal == "nan" || literal == "nanf")
        ScalarConverter::WitchType = EXEPTION;
    else if (literal == "+inf" || literal == "+inff" || literal == "inf" || literal == "inff")
        ScalarConverter::WitchType = EXEPTION;
    else if (literal == "-inf" || literal == "-inff")
        ScalarConverter::WitchType = EXEPTION;
    else
    {
        size_t i = 0;
        if (literal[i] == '+' || literal[i] == '-')
            i++;
        while (i < literal.length() && std::isdigit(literal[i]))
            i++;
        if (i == literal.length())
            ScalarConverter::WitchType = INT;
        else
        {
            i++;
            while (i < literal.length() && std::isdigit(literal[i]))
                i++;
            if (i == literal.length())
                ScalarConverter::WitchType = FLOAT;
            else
            {
                i++;
                while (i < literal.length() && std::isdigit(literal[i]))
                    i++;
                if (i == literal.length())
                    ScalarConverter::WitchType = DOUBLE;
                else
                    ScalarConverter::WitchType = EXEPTION;
            }
        }
    }
}


void ScalarConverter::convert(std::string literal)
{
    setFlag(literal);
    if (ScalarConverter::WitchType == CHAR)
        convertChar(literal);
    else if (ScalarConverter::WitchType == INT)
        convertInt(literal);
    else if (ScalarConverter::WitchType == FLOAT)
        convertFloat(literal);
    else if (ScalarConverter::WitchType == DOUBLE)
        convertDouble(literal);
    else
        std::cout << "Error: invalid literal" << std::endl;
}

void ScalarConverter::printChar()
{
    std::cout << "char: ";
    if (std::isprint(types.c))
        std::cout << "'" << types.c << "'" << std::endl;
    else
        std::cout << "Non displayable" << std::endl;
    std::cout << "int: " << types.num << std::endl;
    std::cout << "float: " << std::fixed << std::setprecision(2) << types.f << "f" << std::endl;
    std::cout << "double: " << std::fixed << std::setprecision(2) << types.d << std::endl;
}

void ScalarConverter::printInt()
{
    std::cout << "char: ";
    if (std::isprint(types.c))
        std::cout << "'" << types.c << "'" << std::endl;
    else
        std::cout << "Non displayable" << std::endl;
    std::cout << "int: " << types.num << std::endl;
    std::cout << "float: " << std::fixed << std::setprecision(2) << types.f << "f" << std::endl;
    std::cout << "double: " << std::fixed << std::setprecision(2) << types.d << std::endl;
}


void ScalarConverter::printFloat()
{
    std::cout << "char: ";
    if (std::isprint(types.c))
        std::cout << "'" << types.c << "'" << std::endl;
    else
        std::cout << "Non displayable" << std::endl;
    std::cout << "int: " << types.num << std::endl;
    std::cout << "float: " << std::fixed << std::setprecision(2) << types.f << "f" << std::endl;
    std::cout << "double: " << std::fixed << std::setprecision(2) << types.d << std::endl;
}


void ScalarConverter::printDouble()
{
    std::cout << "char: ";
    if (std::isprint(types.c))
        std::cout << "'" << types.c << "'" << std::endl;
    else
        std::cout << "Non displayable" << std::endl;
    std::cout << "int: " << types.num << std::endl;
    std::cout << "float: " << std::fixed << std::setprecision(2) << types.f << "f" << std::endl;
    std::cout << "double: " << std::fixed << std::setprecision(2) << types.d << std::endl;
}
