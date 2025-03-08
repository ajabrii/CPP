/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 07:54:10 by ajabri            #+#    #+#             */
/*   Updated: 2025/03/05 08:01:01 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"

// int main()
// {
//     try
//     {
//         Span sp = Span(5);
//         sp.addNumber(6);
//         sp.addNumber(3);
//         sp.addNumber(17);
//         sp.addNumber(9);
//         sp.addNumber(11);
//         std::cout << sp.shortestSpan() << std::endl;
//         std::cout << sp.longestSpan() << std::endl;
//         return 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
// }
int main()
{
    try
    {
            Span sp = Span(10000);
            for (int i = 0; i < 10000; i++)
                sp.addNumber(i+200);
            std::cout << sp.shortestSpan() << std::endl;
            std::cout << sp.longestSpan() << std::endl;
            return 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}