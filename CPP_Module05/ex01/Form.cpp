/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastil <dacastil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 18:09:54 by daniel-cast       #+#    #+#             */
/*   Updated: 2026/01/27 16:39:04 by dacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Form.hpp"

Form::Form() : name("Castle"), isSigned(false), gradeToSign(100), gradeToExecute(120)
{
	if (this->gradeToSign < 1 || this->gradeToExecute > 150)
		throw (Bureaucrat::GradeTooHighException());
	if (this->gradeToSign > 150 || this->gradeToExecute > 150)
		throw (Bureaucrat::GradeTooLowException());
}

Form::~Form()
{
}

Form::Form(const std::string name, int gradeToSi, int gradeToEx) : name(name), isSigned(false), gradeToSign(gradeToSi), gradeToExecute(gradeToEx)
{
	if (this->gradeToSign < 1 || this->gradeToExecute > 150)
		throw (Bureaucrat::GradeTooHighException());
	if (this->gradeToSign > 150 || this->gradeToExecute > 150)
		throw (Bureaucrat::GradeTooLowException());
}

Form::Form(const Form &other) : isSigned(other.isSigned), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute)
{
	if (this->gradeToSign < 1 || this->gradeToExecute > 150)
		throw (Bureaucrat::GradeTooHighException());
	if (this->gradeToSign > 150 || this->gradeToExecute > 150)
		throw (Bureaucrat::GradeTooLowException());
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

bool	Form::stateSigned(void) const
{
	return (this->isSigned);
}

char const	*Form::GradeTooHighException::what(void) const throw()
{
	return ("the grade provided is too high.");
}

char const	*Form::GradeTooLowException::what(void) const throw()
{
	return ("the grade provided is too low.");
}

Form	&Form::operator=(const Form &other)
{
	this->isSigned = other.isSigned;
	return (*this);
}

void	Form::beSigned(const Bureaucrat &b)
{
	if (b.GetGrade() > this->getGradeToSign())
		throw (Form::GradeTooLowException());
	else
		this->isSigned = true;
}

std::ostream	&operator<<(std::ostream &str, const Form &f)
{
	return (str << f.getName() << "Signed (1: yes / 0: no) = [" << f.stateSigned() << "]" << ", grade to sign is " << f.getGradeToSign() << " and grade to execute is " << f.getGradeToExecute() << std::endl);
}

