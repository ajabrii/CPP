/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 11:59:53 by ajabri            #+#    #+#             */
/*   Updated: 2025/01/11 11:47:48 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"

Cat::Cat() : Animal()
{
    brain = new Brain();
    type = "Cat";
    std::cout << "Cat Default constractor is called" << std::endl;
}

Cat::Cat(std::string type) : Animal(type)
{
    brain = new Brain();
    std::cout << "Cat constractor is called" << std::endl;
}

Cat::Cat(const Cat& other) // new brain is not created
    : Animal(other)
{
    std::cout << "Cat Copy constractor is called" << std::endl;
    *this = other;
}

Cat& Cat::operator=(const Cat& other)
{
    std::cout << "Cat Copy assignment is called" << std::endl;
    if (this == &other)
        return *this;
    this->type = other.type;
    return (*this);
}

Cat::~Cat()
{
    delete brain;
    std::cout << "Cat ~Deconstractor is called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << this->type << " is Mewing" << std::endl;
}

std::string Cat::getType( void ) const
{
    return (this->type);
}