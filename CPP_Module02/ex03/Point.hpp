/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 13:13:53 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/08/25 16:56:22 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"
# include <string>
# include <sstream>

#define RED		"\033[31m"
#define GREEN	"\033[32m"
#define RESET	"\033[0m"

class Point
{
private:
	Fixed const	x;
	Fixed const	y;
public:
	Point();
	Point(const Point& value_copy);
	Point(const float value_x, const float value_y);
	~Point();

	Point&	Point::operator=(const Point& other) const;
	Fixed const	&get_x( void ) const;
	Fixed const	&get_y( void ) const;
};

float	ToFloat(const std::string& str);
bool	bsp( Point const a, Point const b, Point const c, Point const point);
float	area(Point	p1, Point p2, Point p3);

#endif
