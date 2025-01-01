/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 15:48:06 by kali              #+#    #+#             */
/*   Updated: 2025/01/01 15:52:15 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : X(0), Y(0)
{
}

Point::Point(float const x, float const y) : X(x), Y(y) {}

Point::Point(Point const& other) : X(other.getX()), Y(other.getY()) {}

Point& Point::operator=(Point const& other) {
    if (this != &other) {
        const_cast<Fixed&>(this->X) = other.getX();
        const_cast<Fixed&>(this->Y) = other.getY();
    }
    return *this;
}

Point::~Point() {}

Fixed Point::getX() const {
    return this->X;
}

Fixed Point::getY() const {
    return this->Y;
}