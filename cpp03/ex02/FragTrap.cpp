/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 15:41:45 by ajabri            #+#    #+#             */
/*   Updated: 2025/01/06 15:49:16 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    HitPoint = 100;
    EnergyP = 100;
    AttackD = 30;
    std::cout << "FragTrap Default Constractor Called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    HitPoint = 100;
    EnergyP = 100;
    AttackD = 30;
    std::cout << "FragTrap Parameter Constractor Called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
    std::cout << "FragTrap Copy Constractor Called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    if (this == &other)
    {
        ClapTrap::operator=(other);
    }
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap ~Deconstracor is called" << std::endl;
}
void FragTrap::highFivesGuys(void)
{
    std::cout << "High Five :) !!!" << std::endl;
}
