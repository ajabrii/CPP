/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 09:48:17 by ajabri            #+#    #+#             */
/*   Updated: 2025/01/06 18:02:39 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

# include <iostream>

# define ATTACK " \033[1;35mattack\033[0m "
# define CANT_ATTACK " \033[1;33mcan't attack\033[0m "
# define REPARE " \033[1;32mbe repaired\033[0m "
# define DAMAGE " \033[1;31mpoints of damage!\033[0m"

class ClapTrap
{
    protected:
        std::string Name;
        int         HitPoint;
        int         EnergyP;
        int         AttackD;
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap& other);
        ClapTrap& operator=(const ClapTrap& other);
        ~ClapTrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
    
};

#endif
