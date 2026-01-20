/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 12:34:09 by daniel-cast       #+#    #+#             */
/*   Updated: 2026/01/20 17:44:11 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

int main ()
{
	std::cout << std::endl << "-------------" << std::endl;

	// Case Low Excepcion in constructor
	try
	{
		Bureaucrat("DanL", 151);
		std::cout << "Dan is created!" << std::endl;
	}
	catch(const std::exception& e) // We used const for not modifier the exception object
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "-------------" << std::endl;
	// Case High Excepcion in constructor
	try
	{
		Bureaucrat("DanH", 0);
		std::cout << "Dan is created!" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "-------------" << std::endl;
	// Case with increment and decrement grade

	try
	{
		Bureaucrat B;
		std::cout << B.GetName() << std::endl;
		std::cout << B.GetGrade() << std::endl;
		B.incrementGrade();
		std::cout << B.GetGrade() << std::endl;
		B.decrementGrade();
		std::cout << B.GetGrade() << std::endl;
		B.decrementGrade();
		std::cout << B.GetGrade() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
