/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 08:00:36 by ajabri            #+#    #+#             */
/*   Updated: 2025/02/27 13:48:43 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

template <typename T>
void iter(T *array, int len, void (*f)(T&))
{
    for (int i = 0; i < len; i++)
        f(array[i]);
}

# endif