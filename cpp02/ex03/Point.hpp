/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 12:05:27 by ajabri            #+#    #+#             */
/*   Updated: 2025/01/03 08:44:48 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
    private:
        Fixed const x;
        Fixed const y;
    public:
        Point();
        Point(float const  x, float const  y);
        Point(const Point& other);
        Point& operator=(const Point& other);
        ~Point();
        Fixed GetPointX() const;
        Fixed GetPointY() const;

        

};

bool bsp( Point const a, Point const b, Point const c, Point const point);

# endif