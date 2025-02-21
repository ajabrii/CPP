/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 12:01:19 by ajabri            #+#    #+#             */
/*   Updated: 2025/01/11 11:23:12 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

Dog::Dog() : Animal()
{
    type = "Dog";
    std::cout << "Dog Default constractor is called" << std::endl;
}

Dog::Dog(std::string type) : Animal(type)
{
    std::cout << "Dog constractor is called" << std::endl;
    
}

Dog::Dog(const Dog& other) : Animal(other)
{
    std::cout << "Dog Copy constractor is called" << std::endl;
    *this = other;
}

Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Dog Copy assignment is called" << std::endl;
    if (this == &other)
        return *this;
    this->type = other.type;
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog ~Deconstractor is called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << this->type << " is Barking" << std::endl;
}

std::string Dog::getType( void ) const
{
    return (this->type);
}