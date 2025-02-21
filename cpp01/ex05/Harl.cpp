/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 11:31:06 by ajabri            #+#    #+#             */
/*   Updated: 2024/12/27 14:32:24 by ajabri           ###   ########.fr       */
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

void Harl::complain(std::string level) {
    for (int i = 0; i < 4; ++i) {
        if (lvs[i].lvl == level) {
            (this->*lvs[i].ft)();
            return;
        }
    }
    std::cout << DEFAULT;
}
