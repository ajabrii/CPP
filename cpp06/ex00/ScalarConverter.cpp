/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 09:33:03 by ajabri            #+#    #+#             */
/*   Updated: 2025/02/22 13:03:46 by ajabri           ###   ########.fr       */
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

void ScalarConverter::setFlag(std::string literal)
{
    if (literal.length() == 1 && std::isprint(literal[0]) && !std::isdigit(literal[0]))
        ScalarConverter::WitchType = CHAR;
    // else if ()
}

void ScalarConverter::convert(std::string literal)
{
    setFlag(literal);
}
    // if (literal.length() == 1 && std::isprint(literal[0]) && !std::isdigit(literal[0])) {
    //         char c = literal[0];
    //         std::cout << "char: '" << c << "'" << std::endl;
    //         std::cout << "int: " << static_cast<int>(c) << std::endl;
    //         std::cout << std::fixed << std::setprecision(1);
    //         std::cout << "float: " << static_cast<float>(c) << "f" << std::endl;
    //         std::cout << "double: " << static_cast<double>(c) << std::endl;
    //         return;
    //     } else {
    //         std::cout << "Invalid type\n";
    //         return;
    //     }