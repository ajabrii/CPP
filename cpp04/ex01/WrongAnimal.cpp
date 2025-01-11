/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 15:33:24 by kali              #+#    #+#             */
/*   Updated: 2025/01/11 15:39:42 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    type = "WrongAnimal";
    std::cout << "WrongAnimal Default constractor is called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
    std::cout << "WrongAnimal Copy constractor is called" << std::endl;
    *this = other;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
    std::cout << "WrongAnimal Copy assignment is called" << std::endl;
    if (this == &other)
        return *this;
    this->type = other.type;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal ~Deconstractor is called" << std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout << this->type << " make sound" << std::endl;
}


std::string WrongAnimal::getType( void ) const
{
    return (this->type);
}
