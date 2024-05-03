/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 21:18:53 by ajabri            #+#    #+#             */
/*   Updated: 2024/05/03 22:14:53 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void to_upper(char *str)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
        i++;
    }
}

int main(int ac, char **av)
{
    int i = 0;
    
    if (ac > 1)
    {
        while (++i < ac)
            to_upper(av[i]);
        i = 0;
        while (++i < ac)
            std::cout << av[i];
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout << "\n";
    return (0);
}