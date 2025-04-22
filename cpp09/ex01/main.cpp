/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 10:27:08 by ajabri            #+#    #+#             */
/*   Updated: 2025/04/22 11:03:44 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RPN.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        Rpn::Logs(RED"Usage: ./RPN \"expression\""RES);
        return (1);
    }
    Rpn rpn(av[1]);
    rpn.calculate(av[1]);
    return (0);
}


