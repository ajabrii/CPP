/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 12:11:24 by ajabri            #+#    #+#             */
/*   Updated: 2025/01/03 09:23:37 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Point.hpp"


Point::Point() : x(0), y(0)
{
}

Point::Point(float const  x, float const  y) : x(x), y(y)
{
}

Point::Point(const Point& other) : x(other.GetPointX()), y(other.GetPointY())
{
}

Point:: ~Point()
{
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
    else
        return *this;  
}
