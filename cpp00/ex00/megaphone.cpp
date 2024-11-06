/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:41:26 by ajabri            #+#    #+#             */
/*   Updated: 2024/10/23 16:08:42 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

int  IsLower(char c)
{
    if (c >= 97 && c <= 122 )
        return (0);
    return (1);
}

void MegaPhone(char *av)
{
    int x;

    x = 0;
    while (av[x])
    {
        if (av[x] && !IsLower(av[x]))
            av[x] -= 32;
        std:: cout << av[x];
            x++;
    }
}

int main(int ac, char **av){
    int y;
    
    y = 1;
    if (ac > 1){
        while (av[y])
            MegaPhone(av[y++]);
        std:: cout << std::endl;

    }else
        std:: cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return (0);
}

