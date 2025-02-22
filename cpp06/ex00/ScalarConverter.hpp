/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 16:34:02 by ajabri            #+#    #+#             */
/*   Updated: 2025/02/22 18:16:08 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <limits>
#include <cstdlib>
#include <cctype>
# include <iomanip>

typedef enum Xflag
{
    CHAR,
    INT,
    FLOAT,
    DOUBLE,
    EXEPTION
} Tflag;

class ScalarConverter
{
    public:
        ScalarConverter();
        ScalarConverter(const ScalarConverter& other);
        ScalarConverter& operator=(const ScalarConverter& other);
        ~ScalarConverter();

        static void convert(std::string literal);
        struct ScalarTypes
        {
            char c;
            int  num;
            float f;
            double d;
        };
        static struct ScalarTypes types;
        static Tflag WitchType;
        static void setFlag(std::string literal);
        static void convertChar(std::string literal);
        static void convertInt(std::string literal);
        static void convertFloat(std::string literal);
        static void convertDouble(std::string literal);
        static void printChar();
        static void printInt();
        static void printFloat();
        static void printDouble();
};


#endif