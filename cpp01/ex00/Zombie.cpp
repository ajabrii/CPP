/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:44:06 by ajabri            #+#    #+#             */
/*   Updated: 2024/11/08 12:02:31 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

void Zombie::announce() {
    std:: cout << this->name <<":  BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name) {
    this->name = name;
}
