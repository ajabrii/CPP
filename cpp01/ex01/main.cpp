/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 10:55:08 by ajabri            #+#    #+#             */
/*   Updated: 2024/11/10 11:56:34 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int main()
{
    Zombie* horde = zombieHorde(5, "ZenoSama");
    for (int i = 0; i < 5; i++)
        horde[i].announce();
    delete [] horde;
    return (0);
}