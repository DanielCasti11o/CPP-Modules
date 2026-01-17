/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastil <dacastil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 17:06:25 by daniel-cast       #+#    #+#             */
/*   Updated: 2026/01/17 18:31:31 by dacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : name("Philip"), grade(150)
{
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
	*this = other;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &other)
{
	this->grade = other.grade;
	return (*this);
}

// getters

std::string Bureaucrat::GetName(void)
{
	return (this->name);
}

int Bureaucrat::GetGrade(void)
{
	return (this->grade);
}

// Grades

void	Bureaucrat::incrementGrade(void)
{
	if ((this->grade + 1) <= 150)
		this->grade++;
	else
		std::cout << "aqui va la excepcion" << std::endl;
}

void Bureaucrat::decrementGrade(void)
{
	if ((this->grade - 1) >= 1)
		this->grade--;
	else
	 std::cout << "aqui va la excepcion" << std::endl;
}

// Exceptions

