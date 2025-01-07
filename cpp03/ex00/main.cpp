/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 10:05:25 by ajabri            #+#    #+#             */
/*   Updated: 2025/01/06 14:43:25 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

int main()
{
    ClapTrap claptrap("ClapTrap");

    claptrap.attack("target");
    // claptrap.attack("target");
    claptrap.takeDamage(1);
    claptrap.beRepaired(11);

    return (0);
}