/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 18:09:54 by daniel-cast       #+#    #+#             */
/*   Updated: 2026/01/21 18:52:09 by daniel-cast      ###   ########.fr       */
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

const std::string	Form::getName(void)
{
	return (this->name);
}

const int	Form::getGradeToSign(void)
{
	return (this->gradeToSign);
}

const int	Form::getGradeToExecute(void)
{
	return (this->gradeToExecute);
}

bool	Form::stateSigned(void)
{
	return (this->isSigned);
}

char const	*Form::GradeTooHighException::what(void) const throw()
{
	return ("");
}

Form	&Form::operator=(const Form &other)
{
	this->isSigned = other.isSigned;
	return (*this);
}
