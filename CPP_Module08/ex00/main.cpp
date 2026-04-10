/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      ::::::::   */
/*                                                    */
/*   By: daniel-castillo <daniel-castillo@studen    +#  +:#   .+#             */
/*                                                +#++:++#++:++   +#++:++#++: */
/*   Created: 2026/04/09 16:30:00 by daniel-cast       #+#   #+               */
/*   Updated: 2026/04/10 15:34:00 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <vector>
# include <list>
# include <deque>
# include "easyfind.hpp"

int main()
{
	std::vector<int> v; // == List v ==
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);

	std::list<int> l; // == List l ==
	l.push_back(10);
	l.push_back(20);
	l.push_back(30);
	l.push_front(0);

	std::deque<int> d; // == Deque d ==
	d.push_back(100);
	d.push_back(200);
	d.push_back(300);


	try
	{
		std::vector<int>::iterator it = easyfind(v, 3);
		std::cout << "Vector: Found value at position " << (it - v.begin()) << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "Vector: " << e.what() << std::endl;
	}

	try
	{
		std::vector<int>::iterator it = easyfind(v, 99);
		std::cout << "Vector: Found value at position " << (it - v.begin()) << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "Vector: " << e.what() << std::endl;
	}

	try
	{
		easyfind(l, 20);
		std::cout << "List: Found value" << std::endl;
	}
	catch (std::exception& e)
	{
	std::cout << "List: " << e.what() << std::endl;
	}

	try
	{
		easyfind(d, 500);
		std::cout << "Deque: Found value" << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "Deque: " << e.what() << std::endl;
	}

	return (0);
}
