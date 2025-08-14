/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 13:13:46 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/08/14 13:25:48 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(int argc, char **argv)
{
	if (argc != 9)
	{
		std::cout << "is necessary 8 arguments!" << std::endl;
		std::cout << "point_a = [1]:x [2]:y   |   point_b = [3]:x [4]:y   |   point_c = [5]:x [6]:y   |   point_ref = [7]:x [8]:y" << std::endl;
		return (0);
	}

	Point	a(ToFloat(argv[1]), ToFloat(argv[2]));
	Point	b(ToFloat(argv[3]), ToFloat(argv[4]));
	Point	c(ToFloat(argv[5]), ToFloat(argv[6]));
	Point	ref(ToFloat(argv[7]), ToFloat(argv[8]));

	std::cout << "Point_a = {" << a.get_x().toFloat() << ", " << a.get_y().toFloat() << " }" << std::endl <<
	"Point_b = { " << b.get_x().toFloat() << ", " << b.get_y().toFloat() << " }" << std::endl <<
	"Point_c = { " << c.get_x().toFloat() << ", " << c.get_y().toFloat() << " }" << std::endl <<
	"Reference Point = { " << ref.get_x().toFloat() << ", " << ref.get_y().toFloat() << " }" << std::endl;
	if (bsp(a, b, c, ref) == true)
		std::cout << GREEN << "the point is inside the triangle" << RESET << std::endl;
	else
		std::cout << RED << "the point is not inside the triangle or is above an edge of the triangle." << RESET << std::endl;
	return (0);
}

