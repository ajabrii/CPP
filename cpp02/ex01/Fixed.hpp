/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 14:26:18 by ajabri            #+#    #+#             */
/*   Updated: 2024/12/31 13:08:20 by ajabri           ###   ########.fr       */
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
        friend std::ostream& operator<<(std::ostream& Os,const Fixed& others);
        ~Fixed();
        float toFloat( void ) const;
        int toInt( void ) const;
         int getRawBits( void ) const;
        void setRawBits( int const raw );
};




#endif