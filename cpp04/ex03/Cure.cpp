/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 18:02:03 by kali              #+#    #+#             */
/*   Updated: 2025/01/11 18:02:38 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cure.hpp"

Cure::Cure()
    : AMateria("cure")
{
}

Cure::~Cure()
{
}

Cure&    Cure::operator=(const Cure& other)
{
    (void)other;
    return *this;
}

AMateria*   Cure::clone() const
{
    return new Cure();
}

void    Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}