/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 14:29:30 by ajabri            #+#    #+#             */
/*   Updated: 2025/01/01 15:36:00 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

const int Fixed::m_FractionalBits = _FRACTIONAL_BIT;

Fixed::Fixed() : m_Fixednum(0)
{
    std::cout << "Default constructor called" <<  std::endl;
}

Fixed:: Fixed(const Fixed& others)
{
      std::cout << "Copy constructor called" <<  std::endl;
      *this = others;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
};

Fixed& Fixed::operator=(const Fixed& others)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this == &others)
        return *this;
    this->m_Fixednum = others.getRawBits();
    return *this;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->m_Fixednum;
}

void Fixed::setRawBits( int const raw )
{
    this->m_Fixednum = raw;
}

