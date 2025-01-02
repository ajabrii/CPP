/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 12:11:24 by ajabri            #+#    #+#             */
/*   Updated: 2025/01/02 18:48:09 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Point.hpp"


Point::Point(const Point& other)
{
    *this = other;
}


Fixed Point::GetPointX() const
{
    return this->x;
}

Fixed Point::GetPointY() const
{
    return this->y;
}

Point& Point::operator=(const Point& other)
{
    if (this == &other)
        return *this;
    const_cast<Fixed&>(this->x) = other.GetPointX();
    const_cast<Fixed&>(this->y) = other.GetPointY();
    return *this;  
}