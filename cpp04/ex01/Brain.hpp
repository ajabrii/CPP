/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 11:33:03 by ajabri            #+#    #+#             */
/*   Updated: 2025/01/11 12:01:10 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# define N_IDEA 100


class Brain
{
    private:
        std::string ideas[N_IDEA];
    public:
        Brain();
        Brain(const Brain& other);
        Brain& operator=(const Brain& others);
        ~Brain();
};

# endif