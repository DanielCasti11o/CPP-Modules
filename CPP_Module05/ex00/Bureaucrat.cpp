/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 17:06:25 by daniel-cast       #+#    #+#             */
/*   Updated: 2026/01/20 17:45:53 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : name("Philip"), grade(150)
{
}

Bureaucrat::~Bureaucrat(void)
{
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade)
{
	if (this->grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	if (this->grade > 150)
		throw (Bureaucrat::GradeTooLowException());
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
	*this = other;
	if (this->grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	if (this->grade > 150)
		throw (Bureaucrat::GradeTooLowException());
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &other)
{
	this->grade = other.grade;
	return (*this);
}

// getters

std::string Bureaucrat::GetName(void) const
{
	return (this->name);
}

int Bureaucrat::GetGrade(void) const
{
	return (this->grade);
}

// Grades

void	Bureaucrat::decrementGrade(void)
{
	if ((this->grade + 1) > 150)
		throw (Bureaucrat::GradeTooLowException());
	else
		this->grade++;
}

void Bureaucrat::incrementGrade(void)
{
	if ((this->grade - 1) < 1)
		throw (Bureaucrat::GradeTooHighException());
	else
		this->grade--;
}

// Exceptions

char const	*Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Grade is too high!");
}

char const	*Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Grade is too low!");
}

std::ostream	&operator<<(std::ostream &str, Bureaucrat const &b)
{
	return (str << b.GetName() << ", bureaucrat grade " << b.GetGrade() << std::endl);
}
