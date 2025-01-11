/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 11:33:03 by ajabri            #+#    #+#             */
/*   Updated: 2025/01/11 15:54:34 by kali             ###   ########.fr       */
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
        void setIdea(int index, std::string idea);
        std::string getIdea(int index) const;
};

# endif