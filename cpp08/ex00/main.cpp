/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 07:48:18 by ajabri            #+#    #+#             */
/*   Updated: 2025/03/05 07:44:00 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "easyfind.hpp"

int main()
{
    std::vector<int> v;
    for (int i = 0; i < 10; i++)
        v.push_back(i);
    try
    {
        std::cout << easyfind(v, 3) << std::endl;
        std::cout << easyfind(v, 9) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr <<"Exception catched: "<< "Element not found!" << std::endl;
    }
    return 0;
}

// int main()
// {
//     std::list<int> l;
//     for (int i = 0; i < 10; i++)
//         l.push_back(i);
//     try
//     {
//         std::cout << easyfind(l, 3) << std::endl;
//         std::cout << easyfind(l, 10) << std::endl;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr <<"Exception catched: "<< "Element not found!" << std::endl;
//     }
// }

// int main()
// {
//     std::deque<int> d;
//     for (int i = 0; i < 10; i++)
//         d.push_back(i);
//     try
//     {
//         std::cout << easyfind(d, 3) << std::endl;
//         std::cout << easyfind(d, 10) << std::endl;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr <<"Exception catched: "<< "Element not found!" << std::endl;
//     }
// }