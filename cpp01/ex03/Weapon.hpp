/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 11:31:24 by ajabri            #+#    #+#             */
/*   Updated: 2024/11/10 12:09:21 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WEAPON_HPP
#define WEAPON_HPP 

# include <iostream>

class Weapon
{
    public:
        Weapon(std::string type);
        const std::string &getType(void) const;
        void setType(std::string type);
    private:
        std::string type;
};
#endif