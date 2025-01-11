/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 11:38:35 by ajabri            #+#    #+#             */
/*   Updated: 2025/01/11 16:10:21 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Brain.hpp"

Brain::Brain()
{
    for (int i = 0; i < N_IDEA; i++)
        ideas[i] = "No idea" + i;
    std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain& other)
{
    std::cout << "Brain copy constructor called" << std::endl;
    for (int i = 0; i < N_IDEA; i++)
        ideas[i] = other.ideas[i];
}

Brain& Brain::operator=(const Brain& other)
{
    std::cout << "Brain assignation operator called" << std::endl;
    if (this == &other)
        return (*this);
    for (int i = 0; i < N_IDEA; i++)
        ideas[i] = other.ideas[i];
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

void Brain::setIdea(int index, std::string idea)
{
    if (index >= 0 && index < N_IDEA)
        ideas[index] = idea;
}

std::string Brain::getIdea(int index) const
{
    if (index >= 0 && index < N_IDEA)
        return (ideas[index]);
    return ("");
}
