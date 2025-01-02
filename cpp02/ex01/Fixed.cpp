/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 14:29:30 by ajabri            #+#    #+#             */
/*   Updated: 2025/01/02 17:28:32 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

const int Fixed::m_FractionalBits = _FRACTIONAL_BIT;

Fixed::Fixed() : m_Fixednum(0)
{
    std::cout << "Default constructor called" <<  std::endl;
}

Fixed::Fixed(const int nb)
{
    std::cout << "Int constructor called" <<  std::endl;
    m_Fixednum = nb << m_FractionalBits;
}

Fixed::Fixed(const float fnb)
{
    std::cout << "Float constructor called" <<  std::endl;
    m_Fixednum = roundf(fnb * (1 << m_FractionalBits));
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

std::ostream& operator<<(std::ostream& Os,const Fixed& others)
{
    Os << others.toFloat();
    return Os;
}


int Fixed::toInt( void ) const
{
    return m_Fixednum >> m_FractionalBits;
}

float Fixed::toFloat( void ) const
{
    return (float)m_Fixednum / (1 << m_FractionalBits);
}

int Fixed::getRawBits( void ) const
{
    return this->m_Fixednum;
}

void Fixed::setRawBits( int const raw )
{
    this->m_Fixednum = raw;
}