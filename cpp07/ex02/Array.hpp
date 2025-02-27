/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 08:13:19 by ajabri            #+#    #+#             */
/*   Updated: 2025/02/27 13:56:46 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>

template <typename T>
class Array
{
    private:
        T *m_Array;
        unsigned int _size;
    public:
        Array();
        Array(unsigned int n);
        Array(Array const &src);            
        ~Array();
        Array &operator=(Array const &src);
        T &operator[](unsigned int i);
        unsigned int size() const;
};


template <typename T>
Array<T>::Array() : m_Array(NULL), _size(0)
{
}

template <typename T>
Array<T>::Array(unsigned int n) : _size(n)
{
    m_Array = new T[n];
}

template <typename T>
Array<T>::Array(Array const &src)
{
    *this = src;
}

template <typename T>
Array<T>::~Array()
{
    delete [] m_Array;
}

template <typename T>
Array<T> &Array<T>::operator=(Array const &src)
{
    if (this != &src)
    {
        _size = src.size();
        m_Array = new T[_size];
        for (unsigned int i = 0; i < _size; i++)
            m_Array[i] = src.m_Array[i];
    }
    return (*this);
}

template <typename T>
T &Array<T>::operator[](unsigned int i)
{
    if (i >= _size)
        throw std::out_of_range("Index out of range");
    return (m_Array[i]);
}

template <typename T>
unsigned int Array<T>::size() const
{
    return (_size);
}

# endif
