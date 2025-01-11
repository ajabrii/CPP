/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 12:01:19 by ajabri            #+#    #+#             */
/*   Updated: 2025/01/11 16:09:03 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

Dog::Dog() : Animal()
{
    type = "Dog";
    brain = new Brain();
    std::cout << "Dog Default constractor is called" << std::endl;
}

Dog::Dog(std::string type)
    : Animal(type), brain(new Brain())
{
    brain = new Brain();
    std::cout << "Dog constractor is called" << std::endl;

}

Dog::Dog(const Dog& other)
    : Animal(other) , brain(new Brain(*other.brain))
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
    *brain = *other.brain;
    return (*this);
}

Dog::~Dog()
{
    delete brain;
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

std::string Dog::getBIdea(int index) const
{
    return (brain->getIdea(index));
}

void Dog::setBIdea(int index, std::string idea)
{
    brain->setIdea(index, idea);
}