/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 15:47:45 by kali              #+#    #+#             */
/*   Updated: 2025/01/01 15:50:10 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
    Fixed const X;
    Fixed const Y;

public:
    Point();
    Point(float const x, float const y);
    Point(Point const& other);
    Point& operator=(Point const& other);
    ~Point();

    Fixed getX() const;
    Fixed getY() const;
};

#endif