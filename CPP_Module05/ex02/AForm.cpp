/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastil <dacastil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 18:09:54 by daniel-cast       #+#    #+#             */
/*   Updated: 2026/01/27 16:39:04 by dacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AForm.hpp"

AForm::AForm() : name("Castle"), isSigned(false), gradeToSign(100), gradeToExecute(120)
{
	if (this->gradeToSign < 1 || this->gradeToExecute > 150)
		throw (Bureaucrat::GradeTooHighException());
	if (this->gradeToSign > 150 || this->gradeToExecute > 150)
		throw (Bureaucrat::GradeTooLowException());
}

AForm::~AForm()
{
}

AForm::AForm(const std::string name, int gradeToSi, int gradeToEx) : name(name), isSigned(false), gradeToSign(gradeToSi), gradeToExecute(gradeToEx)
{
	if (this->gradeToSign < 1 || this->gradeToExecute > 150)
		throw (Bureaucrat::GradeTooHighException());
	if (this->gradeToSign > 150 || this->gradeToExecute > 150)
		throw (Bureaucrat::GradeTooLowException());
}

AForm::AForm(const AForm &other) : isSigned(other.isSigned), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute)
{
	if (this->gradeToSign < 1 || this->gradeToExecute > 150)
		throw (Bureaucrat::GradeTooHighException());
	if (this->gradeToSign > 150 || this->gradeToExecute > 150)
		throw (Bureaucrat::GradeTooLowException());
}

std::string	AForm::getName(void) const
{
	return (this->name);
}

int	AForm::getGradeToSign(void) const
{
	return (this->gradeToSign);
}

int	AForm::getGradeToExecute(void) const
{
	return (this->gradeToExecute);
}

bool	AForm::stateSigned(void) const
{
	return (this->isSigned);
}

char const	*AForm::GradeTooHighException::what(void) const throw()
{
	return ("the grade provided is too high.");
}

char const	*AForm::GradeTooLowException::what(void) const throw()
{
	return ("the grade provided is too low.");
}

AForm	&AForm::operator=(const AForm &other)
{
	this->isSigned = other.isSigned;
	return (*this);
}

void	AForm::beSigned(const Bureaucrat &b)
{
	if (b.GetGrade() > this->getGradeToSign())
		throw (AForm::GradeTooLowException());
	else
		this->isSigned = true;
}

void	AForm:: execute(Bureaucrat const & executor) const
{

}

std::ostream	&operator<<(std::ostream &str, const AForm &f)
{
	return (str << f.getName() << "Signed (1: yes / 0: no) = [" << f.stateSigned() << "]" << ", grade to sign is " << f.getGradeToSign() << " and grade to execute is " << f.getGradeToExecute() << std::endl);
}

