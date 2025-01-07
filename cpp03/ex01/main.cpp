/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 10:05:25 by ajabri            #+#    #+#             */
/*   Updated: 2025/01/06 15:16:16 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

int main()
{
    ScavTrap st("Mohamed ali");
    st.attack("Iron mike");
    // st.beRepaired(20);
    st.takeDamage(100);
    st.guardGate();
    st.attack("Mike tyson");
    

}