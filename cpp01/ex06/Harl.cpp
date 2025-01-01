/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 14:38:43 by ajabri            #+#    #+#             */
/*   Updated: 2024/12/28 16:32:20 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

void Harl::debug(void) {
    std::cout << DEBUG;
}

void Harl::info(void) {
    std::cout << INFO;
}

void Harl::warning(void) {
    std::cout << WARRNING;
}

void Harl::error(void) {
    std::cout << ERROR;
}

const Harl::Level Harl::lvs[4] = {
    {"DEBUG", &Harl::debug},
    {"INFO", &Harl::info},
    {"WARNING", &Harl::warning},
    {"ERROR", &Harl::error}
};


int Harl::getIndex(std::string level) {
    for (int i = 0; i < 4; ++i) {
        if (this->lvs[i].lvl == level)
            return (i);
    }
    return (-1);
}
void Harl::complain(std::string level) {

    int indx = getIndex(level);
    switch (indx)
    {
        case 0:
            (this->*lvs[0].ft)();
        case 1:
            (this->*lvs[1].ft)();
         case 2:
            (this->*lvs[2].ft)();
        case 3:
            (this->*lvs[3].ft)();
            break;
        default:
            std::cout << DEFAULT;
    }
}
