/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 17:59:27 by kali              #+#    #+#             */
/*   Updated: 2025/01/11 18:00:23 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



# include "AMateria.hpp"

AMateria::AMateria() : _type("Default")
{
}

AMateria::AMateria(std::string const& type) : _type(type)
{
}

AMateria::~AMateria()
{
}

AMateria::AMateria(const AMateria& other)
{
    *this = other;
}

AMateria& AMateria::operator=(const AMateria& other)
{
    (void)other;
    return *this;
}

std::string const&  AMateria::getType() const
{
    return _type;
}

void AMateria::use(ICharacter& target)
{
    (void)target;
}