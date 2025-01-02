/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 12:31:34 by ajabri            #+#    #+#             */
/*   Updated: 2025/01/02 16:03:08 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Point.hpp"
# include "Fixed.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed  Px = point.GetPointX();
    Fixed  Py = point.GetPointY();
    Fixed  Xa = a.GetPointX();
    Fixed  Ya = a.GetPointY();
    Fixed  Xb = b.GetPointX();
    Fixed  Yb = b.GetPointY();
    Fixed  Xc = c.GetPointX();
    Fixed  Yc = c.GetPointY();
    Fixed  a1 = (Px - Xa) * (Yb - Ya) - (Xb - Xa) * (Py - Ya);
    Fixed  a2 = (Px - Xb) * (Yc - Yb) - (Xc - Xb) * (Py - Yb);
    Fixed  a3 = (Px - Xc) * (Ya - Yc) - (Xa - Xc) * (Py - Yc);
    if ((a1 > 0 && a2 > 0 && a3 > 0) || (a1 < 0 && a2 < 0 && a3 < 0))
        return true;
    return false;
}