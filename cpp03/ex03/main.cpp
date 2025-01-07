/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 10:05:25 by ajabri            #+#    #+#             */
/*   Updated: 2025/01/07 12:24:16 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DiamondTrap.hpp"

int main()
{
    DiamondTrap st;
    st.attack("Iron mike");
    st.beRepaired(20);
    st.takeDamage(99);
    st.attack("Mike tyson");
    st.highFivesGuys();
    st.guardGate();
    st.whoAmI();
}