/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 10:46:34 by ajabri            #+#    #+#             */
/*   Updated: 2024/11/10 11:01:54 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *zombieP = new Zombie[N];
    for (int i = 0; i < N; i++){
        zombieP[i] = Zombie(name);
    }
    return (zombieP);
}
