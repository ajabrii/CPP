/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 08:18:00 by ajabri            #+#    #+#             */
/*   Updated: 2025/02/27 13:57:53 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Array.hpp"

int main()
{
    try
    {
        Array<int> array(5);
        for (unsigned int i = 0; i < array.size(); i++)
            array[i] = i;
        for (unsigned int i = 0; i < array.size(); i++)
            std::cout << array[i] << std::endl;
        std::cout << "----------------" << std::endl;
        Array<int> array2(array);
        for (unsigned int i = 0; i < array2.size(); i++)
            std::cout << array2[i] << std::endl;
        std::cout << "----------------" << std::endl;
        Array<int> array3;
        array3 = array2;
        for (unsigned int i = 0; i < array3.size(); i++)
            std::cout << array3[i] << std::endl;
        Array<int> array4(0);
    }
    catch(const std::exception& e)
    {
        std::cerr <<"Exception catched: "<< e.what() << '\n';
    }
    
}