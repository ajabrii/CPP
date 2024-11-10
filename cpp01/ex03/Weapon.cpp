/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 12:04:03 by ajabri            #+#    #+#             */
/*   Updated: 2024/11/10 12:10:44 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    this->type = type;
}

const std::string& Weapon:: getType() const
{
    return (this->type);
}

void Weapon::setType(std::string type)
{
    this->type = type;
}
