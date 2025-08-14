/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 13:13:50 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/08/14 12:28:57 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void)
{
	this->x = 0;
	this->y = 0;
}

Point::Point(const float value_x, const float value_y): x(value_x), y(value_y)
{
}

Point::Point(const Point& value_copy)
{
	(*this) = value_copy;
}

Point::~Point(void)
{
}

// getters

Fixed const	&Point::get_x( void ) const
{
	return (this->x);
}

Fixed const	&Point::get_y(void) const
{
	return (this->y);
}


