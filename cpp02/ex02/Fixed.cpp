/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 14:29:30 by ajabri            #+#    #+#             */
/*   Updated: 2024/12/31 14:48:48 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

const int Fixed::m_FractionalBits = _FRACTIONAL_BIT;

//!<Constructors>----------
Fixed::Fixed() : m_Fixednum(0)
{
    // std::cout << "Default constructor called" <<  std::endl;
}

Fixed::Fixed(const int nb)
{
    // std::cout << "Int constructor called" <<  std::endl;
    m_Fixednum = nb << m_FractionalBits;
}

Fixed::Fixed(const float fnb)
{
    // std::cout << "Float constructor called" <<  std::endl;
    m_Fixednum = roundf(fnb * (1 << m_FractionalBits));
}

Fixed:: Fixed(const Fixed& others)
{
    //   std::cout << "Copy constructor called" <<  std::endl;
      *this = others;
}
//*</Constructors>----------

//!<Destructor>----------
Fixed::~Fixed()
{
    // std::cout << "Destructor called" << std::endl;
};
//*</Destructor>----------

//!<Member functions>----------
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
    // std::cout << "getRawBits member function called" << std::endl;
    return this->m_Fixednum;
}

void Fixed::setRawBits( int const raw )
{
    this->m_Fixednum = raw;
}
//*</Member functions>----------


//!<Operators>----------
Fixed& Fixed::operator=(const Fixed& others)
{
    // std::cout << "Copy assignment operator called" << std::endl;
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

Fixed& Fixed::operator++()
{
    m_Fixednum++;
    return *this;
}

Fixed& Fixed::operator--()
{
    m_Fixednum--;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed CurrState = *this;
    this->m_Fixednum++;
    return CurrState;
}

Fixed Fixed::operator++(int)
{
    Fixed CurrState = *this;
    this->m_Fixednum++;
    return CurrState;
}

Fixed Fixed::operator+(const Fixed& others)
{
    return Fixed(this->toFloat() + others.toFloat());
}

Fixed Fixed::operator-(const Fixed& others)
{
    return Fixed(others.toFloat() - this->toFloat());
}

Fixed Fixed::operator/(const Fixed& others)
{
    return Fixed(this->toFloat() / others.toFloat());
}

Fixed Fixed::operator*(const Fixed& others)
{
    return Fixed(this->toFloat() * others.toFloat());
}
bool operator<(const Fixed& a, const Fixed& b)
{
    return a.toFloat() < b.toFloat();
}

bool operator>(const Fixed& a, const Fixed& b)
{
    return a.toFloat() > b.toFloat();
}

bool operator>=(const Fixed& a, const Fixed& b)
{
    return a.toFloat() >= b.toFloat();
}

bool operator<=(const Fixed& a, const Fixed& b)
{
    return a.toFloat() <= b.toFloat();
}

bool operator==(const Fixed& a, const Fixed& b)
{
    return a.toFloat() == b.toFloat();
}

bool operator!=(const Fixed& a, const Fixed& b)
{
    return a.toFloat() != b.toFloat();
}
//*<Operators>----------

//!<min-max>-----------
Fixed& Fixed::max(Fixed &a, Fixed &b)
{
    if (a.toFloat() > b.toFloat())
        return a;
    else
        return b;
}

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
    if (a.toFloat() > b.toFloat())
        return b;
    else
        return a;
}
//*</min-max>----------

//!<min-max-const>---------
const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a.toFloat() > b.toFloat())
        return a;
    else
        return b;
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a.toFloat() > b.toFloat())
        return b;
    else
        return a;
}
//*<min-max-const>-------------
