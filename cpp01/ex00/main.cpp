/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:41:30 by ajabri            #+#    #+#             */
/*   Updated: 2024/11/08 12:05:12 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int main()
{
    Zombie *zombie;
    
    zombie = newzombie("Killwa");
    zombie->announce();
    randomChump("Gun");
    delete zombie;
}
