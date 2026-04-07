/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 23:34:19 by daniel-cast       #+#    #+#             */
/*   Updated: 2026/04/08 00:14:22 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "Array.hpp"

int main()
{
	std::cout << GREEN << "=== Test 1: Default constructor ===" << RESET << std::endl;
	Array<int> a;
	std::cout << "Size: " << a.size() << std::endl;

	std::cout << GREEN << "\n=== Test 2: Constructor with size ===" << RESET << std::endl;
	Array<int> b(5);
	std::cout << "Size: " << b.size() << std::endl;
	for (unsigned int i = 0; i < b.size(); i++)
		std::cout << b[i] << " ";
	std::cout << std::endl;

	std::cout << PINK << "\n=== Test 3: Modify elements ===" << RESET << std::endl;
	for (unsigned int i = 0; i < b.size(); i++)
		std::cout << b[i] << " ";
	std::cout << std::endl << PINK << "result: " << RESET << std::endl;
	for (unsigned int i = 0; i < b.size(); i++)
		b[i] = i * 10;
	for (unsigned int i = 0; i < b.size(); i++)
		std::cout << b[i] << " ";
	std::cout << std::endl;

	std::cout << PINK << "\n=== Test 4: Copy constructor ===" << RESET << std::endl;
	Array<int> c(b);
	std::cout << "C size: " << c.size() << std::endl;
	for (unsigned int i = 0; i < c.size(); i++)
		std::cout << c[i] << " ";
	std::cout << std::endl;


	std::cout << YELLOW << "\n=== Test 5: Modify copy doesn't affect original ===" << RESET << std::endl;
	c[0] = 999;
	std::cout << "b[0]: " << b[0] << " | c[0]: " << c[0] << std::endl;


	std::cout << YELLOW << "\n=== Test 6: Assignment operator ===" << RESET << std::endl;
	Array<int> d;
	d = c; // Assignment operator.
	std::cout << "d size: " << d.size() << std::endl;
	for (unsigned int i = 0; i < d.size(); i++)
		std::cout << d[i] << " ";
	std::cout << std::endl;


	std::cout << BLUE << "\n=== Test 7: String array ===" << RESET << std::endl;
	Array<std::string> s(3);
	s[0] = "Hello";
	s[1] = "World";
	s[2] = "!";
	for (unsigned int i = 0; i < s.size(); i++)
		std::cout << s[i] << " ";
	std::cout << std::endl;


	std::cout << RED << "\n=== Test 8: Out of bounds exception ===" << RESET << std::endl;
	try
	{
		b[10] = 42;
	}
	catch (const std::exception& e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}


	std::cout << GREEN << "\n=== Test 9: Const access ===" << RESET << std::endl;
	const Array<int> e(b);
	std::cout << "e[2]: " << e[2] << std::endl << std::endl;

	return (0);
}
