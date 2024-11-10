/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 12:23:08 by ajabri            #+#    #+#             */
/*   Updated: 2024/11/10 12:24:53 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"

class HumanB
{
    public:
        HumanB(std::string name);
        void attack(void);
        void setWeapon(Weapon weapon);
    private:
        std::string name;
        Weapon *weapon;
};

# endif 