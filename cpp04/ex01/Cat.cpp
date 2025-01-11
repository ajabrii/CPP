/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 11:59:53 by ajabri            #+#    #+#             */
/*   Updated: 2025/01/11 16:08:58 by kali             ###   ########.fr       */
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

Cat::Cat(const Cat& other)
    : Animal(other) , brain(new Brain(*other.brain))
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
    *brain = *other.brain;
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

std::string Cat::getBIdea(int index) const
{
    return (brain->getIdea(index));
}

void Cat::setBIdea(int index, std::string idea)
{
    brain->setIdea(index, idea);
}
