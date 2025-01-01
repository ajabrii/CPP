/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 14:26:18 by ajabri            #+#    #+#             */
/*   Updated: 2025/01/01 15:36:30 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_HPP
#define FIXED_HPP

# define _FRACTIONAL_BIT 8
# include <iostream>
# include <cstring>

class Fixed
{
    private:
        int m_Fixednum;
        static const int m_FractionalBits;
    public:
        Fixed();
        Fixed(const Fixed& others);
        Fixed& operator=(const Fixed& others);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );

};

#endif