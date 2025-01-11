/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 11:38:35 by ajabri            #+#    #+#             */
/*   Updated: 2025/01/11 11:40:29 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Brain.hpp"

Brain::Brain()
{
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
