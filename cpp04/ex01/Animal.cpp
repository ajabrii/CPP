/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 11:51:08 by ajabri            #+#    #+#             */
/*   Updated: 2025/01/11 11:23:44 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"

Animal::Animal()
{
    type = "Animal";
    std::cout << "Animal Default constractor is called" << std::endl;
}

Animal::Animal(std::string type) : type(type)
{
    std::cout << "Animal constractor is called" << std::endl;
}

Animal::Animal(const Animal& other)
{
    std::cout << "Animal Copy constractor is called" << std::endl;
    *this = other;
}

Animal& Animal::operator=(const Animal& other)
{
    std::cout << "Animal Copy assignment is called" << std::endl;
    if (this == &other)
        return *this;
    this->type = other.type;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Animal ~Deconstractor is called" << std::endl;
}

void Animal::makeSound() const
{
    std::cout << this->type << " make sound" << std::endl;
}

std::string Animal::getType( void ) const
{
    return (this->type);
}