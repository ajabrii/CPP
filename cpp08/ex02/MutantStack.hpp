/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 08:22:15 by ajabri            #+#    #+#             */
/*   Updated: 2025/03/08 08:57:15 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <deque>


template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack();
        MutantStack(const MutantStack &mutantStack);
        MutantStack &operator=(const MutantStack &mutantStack);
        ~MutantStack();

        typedef typename std::deque<T>::iterator iterator;
        iterator begin();
        iterator end();
};

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