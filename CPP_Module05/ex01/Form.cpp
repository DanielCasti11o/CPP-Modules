/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastil <dacastil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 18:09:54 by daniel-cast       #+#    #+#             */
/*   Updated: 2026/01/24 15:06:43 by dacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Form.hpp"

Form::Form() : name("Castle"), isSigned(false), gradeToSign(100), gradeToExecute(120)
{
}

Form::~Form()
{
}

Form::Form(const std::string name, int gradeToSi, int gradeToEx) : name(name), isSigned(false), gradeToSign(gradeToSi), gradeToExecute(gradeToEx)
{
}

Form::Form(const Form &other) : isSigned(other.isSigned), gradeToSign(other.gradeToSign), gradeToExecute(gradeToExecute)
{
}

std::string	Form::getName(void) const
{
	return (this->name);
}

int	Form::getGradeToSign(void) const
{
	return (this->gradeToSign);
}

int	Form::getGradeToExecute(void) const
{
	return (this->gradeToExecute);
}

bool	Form::stateSigned(void)
{
	return (this->isSigned);
}

char const	*Form::GradeTooHighException::what(void) const throw()
{
	return ("Form Error: The grade provided is too high.");
}

char const	*Form::GradeTooLowException::what(void) const throw()
{
	return ("Form Error: The grade provided is too low.");
}

Form	&Form::operator=(const Form &other)
{
	this->isSigned = other.isSigned;
	return (*this);
}

std::ostream	&operator<<(std::ostream &str, const Form &f)
{
	return (str << f.getName() << ", grade to sign is " << f.getGradeToSign() << " and grade to execute is " << f.getGradeToExecute() << std::endl);
}
