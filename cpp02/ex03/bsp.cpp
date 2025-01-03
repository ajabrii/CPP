/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 12:31:34 by ajabri            #+#    #+#             */
/*   Updated: 2025/01/03 08:49:23 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Point.hpp"

Fixed   SurfaceCalculator(Point const A, Point const B, Point const Point)
{
    Fixed x1 = A.GetPointX();
    Fixed y1 = A.GetPointY();

    Fixed x2 = B.GetPointX();
    Fixed y2 = B.GetPointY();

    Fixed x3 = Point.GetPointX();
    Fixed y3 = Point.GetPointY();
    
    Fixed Surface;
    Surface = (x1 * (y2 - y3)) + (x2 * (y3 - y1)) + ( x3 * (y1 - y2));

    if (Surface < Fixed(0))
        Surface = Surface * Fixed(-1);
    return (Surface / Fixed(2));
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed bigTriangle = SurfaceCalculator(a, b, c);
    
    Fixed abp = SurfaceCalculator(a, b, point);
    Fixed bcp = SurfaceCalculator(b, c, point);
    Fixed acp = SurfaceCalculator(a, c, point);
    if (bigTriangle == (abp + bcp + acp) &&
        abp != Fixed(0) && bcp != Fixed(0) && acp != Fixed(0))
        return (true);
    return (false);
}
