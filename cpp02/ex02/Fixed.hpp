/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 14:26:18 by ajabri            #+#    #+#             */
/*   Updated: 2024/12/31 14:43:26 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_HPP
#define FIXED_HPP

# define _FRACTIONAL_BIT 8
# include <iostream>
# include <cmath>

class Fixed
{
    private:
        int m_Fixednum;
        static const int m_FractionalBits;
    public:
        Fixed();
        Fixed(const int nb);
        Fixed(const float fnb);
        Fixed(const Fixed& others);
        Fixed& operator=(const Fixed& others);
        Fixed& operator++();
        Fixed& operator--();
        Fixed operator--(int);
        Fixed operator++(int);
        Fixed operator*(const Fixed& others);
        Fixed operator+(const Fixed& others);
        Fixed operator-(const Fixed& others);
        Fixed operator/(const Fixed& others);
        static const Fixed& max(const Fixed &a, const Fixed &b);
        static const Fixed& min(const Fixed &a, const Fixed &b);
        static Fixed& max(Fixed &a, Fixed &b);
        static Fixed& min(Fixed &a, Fixed &b);
        ~Fixed();
        float toFloat( void ) const;
        int toInt( void ) const;
         int getRawBits( void ) const;
        void setRawBits( int const raw );
};

std::ostream& operator<<(std::ostream& Os,const Fixed& others);
bool operator<(const Fixed& a, const Fixed& b);
bool operator>(const Fixed& a, const Fixed& b);
bool operator>=(const Fixed& a, const Fixed& b);
bool operator<=(const Fixed& a, const Fixed& b);
bool operator==(const Fixed& a, const Fixed& b);
bool operator!=(const Fixed& a, const Fixed& b);




#endif