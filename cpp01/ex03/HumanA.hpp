/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 12:12:58 by ajabri            #+#    #+#             */
/*   Updated: 2024/11/10 12:14:02 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HUMANA_HPP
# define HUMANA_HPP 
# include "Weapon.hpp"

class HumanA
{
    public:
        HumanA(std::string name, Weapon &weapon);
        void attack(void);
    private:
        std::string name;
        Weapon &weapon;
};
#endif