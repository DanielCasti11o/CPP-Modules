/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 13:13:36 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/08/14 13:21:36 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

// We must find the area of a triangle but since we do not have the measurement of any of its sides we must find it with vectors.

float ToFloat(const std::string& str)
{
	std::stringstream ss(str);
	float f;
	ss >> f;
	return (f);
}

	// IF YOU WANT PRINT BEFORE OPERATION:
	// std::cout << p1.get_x().toFloat() << " " << p1.get_y().toFloat() << " " << p2.get_x().toFloat()
	// << " " << p2.get_y().toFloat() << " " << p3.get_x().toFloat() << " " << p3.get_y().toFloat() << " "
	//  << std::endl;

float	area(Point	p1, Point p2, Point p3)
{
	float	res;

	res = (p2.get_x().toFloat() * (p3.get_y().toFloat() - p1.get_y().toFloat()) +
				p1.get_x().toFloat() * (p2.get_y().toFloat() - p3.get_y().toFloat()) +
				p3.get_x().toFloat() * (p1.get_y().toFloat() - p2.get_y().toFloat())) / 2.0f;
	return (std::abs(res));
}

// sum of areas.
// 	std::cout << A << " == " << A_ab + A_ac + A_bc << " --- > " << A_ab << " " << A_ac << " " << A_bc << std::endl;

bool	bsp( Point const a, Point const b, Point const c, Point const point)
{
	float	A;
	float	A_ab;
	float	A_ac;
	float	A_bc;

	A = area(a, b, c);
	A_ab = area(a, b, point);
	A_ac = area(a, c, point);
	A_bc = area(b, c, point);
	float	epsilon = 0.001f * A; // Margin of tolerance.

	if (A_ab == 0 || A_ac == 0 || A_bc == 0)
		return (false);
	else if (std::abs((A_ab + A_ac + A_bc) - A) < epsilon)
		return (true);
	else
		return (false);
}

