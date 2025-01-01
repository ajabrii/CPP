/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 14:38:46 by ajabri            #+#    #+#             */
/*   Updated: 2024/12/27 15:50:08 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

int main(int ac, char **av) {

    Harl harl;
    if (ac < 2) {
        std::cout << "Usage:: ./harlFilter {DEBUG, INFO, WARNING, ERROR}\n";
        return (1);
    }
    harl.complain(av[1]);
}