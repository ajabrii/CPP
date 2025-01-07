/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 17:24:53 by ajabri            #+#    #+#             */
/*   Updated: 2025/01/07 12:24:04 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
    Name = "Default";
    this->HitPoint = FragTrap::HitPoint;
    this->EnergyP = ScavTrap::EnergyP;
    this->AttackD = FragTrap::AttackD;
    std::cout << "Default constractor is called" << std::endl;

}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), Name(name) 
{
    this->HitPoint = FragTrap::HitPoint;
    this->EnergyP = ScavTrap::EnergyP;
    this->AttackD = FragTrap::AttackD;
    std::cout << "Constractor is called" << std::endl;

}


DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
    if (this == &other)
    {
        ClapTrap::operator=(other);
    }
    return *this;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap ~Deconstractor is called" << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "My name is " << this->Name << " and my ClapTrap name is " << ClapTrap::Name << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}