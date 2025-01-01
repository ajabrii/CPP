/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 14:26:18 by ajabri            #+#    #+#             */
/*   Updated: 2024/12/30 15:37:29 by ajabri           ###   ########.fr       */
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
        Fixed(const Fixed& others); //? memcpy(this, &other, sizeof(Fixed)); this is deep copy 
        Fixed& operator=(const Fixed& others);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
    
};

#endif