/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:39:11 by ajabri            #+#    #+#             */
/*   Updated: 2024/11/08 12:04:00 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

# include <iostream>

class Zombie
{
    public:
        Zombie(std::string name);
        void announce(void);
    private:
        std::string name;
};
Zombie* newzombie(std::string name);
void randomChump(std::string name);
#endif