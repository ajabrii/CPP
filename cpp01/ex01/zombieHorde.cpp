/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 10:46:34 by ajabri            #+#    #+#             */
/*   Updated: 2024/12/29 10:34:21 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    if(N < 0) {
        std::cout << "Invalide index!!\n";
        return NULL;
    }
    Zombie *zombieP = new (std::nothrow) Zombie[N];
    if (zombieP == NULL) {
        std::cout << "Memory allocation failure!!\n";
        return (NULL);
    }
    for (int i = 0; i < N; i++) {
        zombieP[i] = Zombie(name);
    }
    return (zombieP);
}
