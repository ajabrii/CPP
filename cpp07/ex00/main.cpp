/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 06:57:44 by ajabri            #+#    #+#             */
/*   Updated: 2025/02/27 13:45:19 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "whatever.hpp"



int main( void )
{
    std::cout << "-------------INT-----------------" << std::endl;
    {
        int a = 2;
        int b = 3;
        
        std::cout <<"initial state: "<< "a = " << a << ", b = " << b << std::endl;
        ::swap( a, b );
        std::cout << "a = " << a << ", b = " << b << std::endl;
        std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
        std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    }
    std::cout << "-------------FLOAT-----------------" << std::endl;
    {
        float a = 2.20;
        float b = 3.14;
        std::cout <<"initial state: "<< "a = " << a << ", b = " << b << std::endl;
        ::swap( a, b );
        std::cout << "a = " << a << ", b = " << b << std::endl;
        std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
        std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    }
    std::cout << "-------------STRING-----------------" << std::endl;
    {
        std::string c = "chaine1";
        std::string d = "chaine2";
        std::cout <<"initial state: "<< "c = " << c << ", d = " << d << std::endl;

        ::swap(c, d);
        std::cout << "c = " << c << ", d = " << d << std::endl;
        std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
        std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    }
    
    return 0;
}