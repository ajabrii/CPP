/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 11:27:44 by ajabri            #+#    #+#             */
/*   Updated: 2025/01/06 20:30:56 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    HitPoint = 100;
    EnergyP = 50;
    AttackD = 20;
    std::cout << "ScavTrap " << " Default Constactor is Called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    HitPoint = 100;
    EnergyP = 50;
    AttackD = 20;
    std::cout << "ScavTrap " << " Parametric Constactor is Called" << std::endl; 
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
    std::cout << "ScavTrap " << " Copy Constactor is Called" << std::endl; 
}

 ScavTrap& ScavTrap::operator=(const ScavTrap& other)
 {
    if (this == &other)
        ClapTrap::operator=(other);
    return *this;
 }

 ScavTrap::~ScavTrap()
 {
    std::cout << "ScavTrap " << " ~Deconstactor is Called" << std::endl;
 }

 void ScavTrap::attack(const std::string& target)
{
    if (EnergyP > 0 && HitPoint > 0) {
        std::cout << "ScavTrap " << this->Name << ATTACK << target << ", causing " << this->AttackD << " points of damage!" << std::endl;
        EnergyP--;
    }
    else
        std::cout << "ScavTrap " << this->Name << CANT_ATTACK << target << " because he have 0 Energy points" << std::endl;
        
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->Name <<" is now in Gate keeper mode."<< std::endl;
}