/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 09:51:52 by ajabri            #+#    #+#             */
/*   Updated: 2025/01/06 14:44:49 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

ClapTrap::ClapTrap() : HitPoint(10), EnergyP(10), AttackD(0)
{
    std::cout << "Default Constractor is Called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : Name(name), HitPoint(10), EnergyP(10), AttackD(0)
{
    std::cout << "Parametric Constractor is Called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    std::cout << "Copy Constractor is Called" << std::endl;
    *this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    if (this == &other)
        return *this;
    this->Name = other.Name;
    this->HitPoint = other.HitPoint;
    this->EnergyP = other.EnergyP;
    this->AttackD = other.AttackD;
    return (*this);   
}

ClapTrap::~ClapTrap()
{
    std::cout << "~DeConstractor is Called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (EnergyP > 0 && HitPoint > 0) {
        std::cout << "ClapTrap " << this->Name << ATTACK << target << ", causing " << this->AttackD << " points of damage!" << std::endl;
        EnergyP--;
    }
    else
        std::cout << "ClapTrap " << this->Name << CANT_ATTACK << target << " because he have 0 Energy points" << std::endl;
        
}

void ClapTrap::takeDamage(unsigned int amount)
{
    HitPoint -= amount;
    if (HitPoint > 0)
        std::cout << "ClapTrap " << this->Name << " take " << amount << DAMAGE << std::endl;
    else
        std::cout << "ClapTrap " << this->Name << " is Dead!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (EnergyP > 0 && HitPoint >= 0) {
    HitPoint += amount;
    EnergyP--;
    std::cout << "ClapTrap " << this->Name << REPARE << amount << " points of health!" << std::endl;
        
    }
    else 
        std::cout << "ClapTrap " << this->Name << " can’t do anything" << std::endl;
}