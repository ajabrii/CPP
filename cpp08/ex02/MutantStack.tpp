/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 08:23:19 by ajabri            #+#    #+#             */
/*   Updated: 2025/03/05 08:30:32 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef MUTANTSTACK_TPP
# define MUTANTSTACK_TPP

# include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>()
{
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &mutantStack) : std::stack<T>(mutantStack)
{
    *this = mutantStack;
}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack &mutantStack)
{
    this->c = mutantStack.c;
    return (*this);
}

template <typename T>
MutantStack<T>::~MutantStack()
{
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
    return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
    return (this->c.end());
}



# endif

