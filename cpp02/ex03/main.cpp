/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 15:53:20 by kali              #+#    #+#             */
/*   Updated: 2025/01/01 15:53:56 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "bsp.cpp"
#include <iostream>

int main() {
    Point a(0, 0);
    Point b(4, 0);
    Point c(0, 4);

    Point p1(1, 1); // Inside
    Point p2(2, 2); // Inside
    Point p3(5, 5); // Outside

    std::cout << "Point p1 is " << (bsp(a, b, c, p1) ? "inside" : "outside") << " the triangle." << std::endl;
    std::cout << "Point p2 is " << (bsp(a, b, c, p2) ? "inside" : "outside") << " the triangle." << std::endl;
    std::cout << "Point p3 is " << (bsp(a, b, c, p3) ? "inside" : "outside") << " the triangle." << std::endl;

    return 0;
}