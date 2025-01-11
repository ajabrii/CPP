/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 15:33:32 by kali              #+#    #+#             */
/*   Updated: 2025/01/11 15:36:46 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    type = "WrongCat";
    std::cout << "WrongCat Default constractor is called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
    std::cout << "WrongCat Copy constractor is called" << std::endl;
    *this = other;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
    std::cout << "WrongCat Copy assignment is called" << std::endl;
    if (this == &other)
        return *this;
    this->type = other.type;
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat ~Deconstractor is called" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << this->type << " is Mewing" << std::endl;
}

std::string WrongCat::getType( void ) const
{
    return (this->type);
}

void WrongCat::setType(std::string type)
{
    this->type = type;
}

