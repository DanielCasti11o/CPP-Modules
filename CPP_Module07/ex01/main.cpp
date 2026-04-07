/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 18:40:03 by daniel-cast       #+#    #+#             */
/*   Updated: 2026/04/07 23:19:27 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "iter.hpp"

// examples funtions to templates

void printInt(int& n)
{
	std::cout << n << " ";
}

void printConstInt(const int& n)
{
	std::cout << n << " ";
}

void printDouble(double& n)
{
	std::cout << n << " ";
}

void printString(std::string& s)
{
	std::cout << s << " ";
}

template<typename T>
void printTemplate(T& elem)
{
	std::cout << elem << " ";
}

// ----------------- main -----------------

int main()
{
	std::cout << "=== Test 1: int array (non-const) ===" << std::endl;
	int intArr[] = {1, 2, 3, 4, 5};
	iter(intArr, 5, printInt);
	std::cout << std::endl;

	std::cout << "=== Test 2: const int array ===" << std::endl;
	const int constIntArr[] = {10, 20, 30};
	iter(constIntArr, 3, printConstInt);
	std::cout << std::endl;

	std::cout << "=== Test 3: double array ===" << std::endl;
	double doubleArr[] = {1.1, 2.2, 3.3};
	iter(doubleArr, 3, printDouble);
	std::cout << std::endl;

	std::cout << "=== Test 4: string array ===" << std::endl;
	std::string strArr[] = {"hello", "world", "!"};
	iter(strArr, 3, printString);
	std::cout << std::endl;

	std::cout << "=== Test 5: template function with int ===" << std::endl;
	iter(intArr, 5, printTemplate<int>);
	std::cout << std::endl;

	std::cout << "=== Test 6: template function with double ===" << std::endl;
	iter(doubleArr, 3, printTemplate<double>);
	std::cout << std::endl;

	return (0);
}
