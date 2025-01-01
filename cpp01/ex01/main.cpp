/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 10:55:08 by ajabri            #+#    #+#             */
/*   Updated: 2024/12/29 10:35:22 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"
# define NZOMBIE 5

int main()
{
    Zombie* horde = zombieHorde(NZOMBIE, "ZenoSama");
    if (!horde)
        return 1;
    for (int i = 0; i < NZOMBIE; i++)
        horde[i].announce();
    delete [] horde;
    return (0);
}