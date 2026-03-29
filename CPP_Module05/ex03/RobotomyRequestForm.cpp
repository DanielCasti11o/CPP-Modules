/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 17:22:06 by daniel-cast       #+#    #+#             */
/*   Updated: 2026/03/29 14:21:50 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy is created", 72, 45), m_target("Robotil")
{
	static bool seeded = false;
	if (!seeded)
	{
		std::srand(std::time(NULL));
		seeded = true;
	}
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy is created", 72, 45), m_target(target)
{
	static bool seeded = false;
	if (!seeded)
	{
		std::srand(std::time(NULL));
		seeded = true;
	}
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	if (this != &other)
	{
		AForm::operator=(other);
		m_target = other.m_target;
	}
	return *this;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm(other), m_target(other.m_target)
{
	static bool seeded = false;
	if (!seeded) {
		std::srand(std::time(NULL));
		seeded = true;
	}
}

void	RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	if(!stateSigned())
		throw FormNotSignedException();
	if (executor.GetGrade() > this->getGradeToExecute())
		throw GradeTooLowException();
	std::cout << "Drilling noises... *" << std::endl;
	if (std::rand() % 2)
		std::cout << m_target << " has been robotomized successfully." << std::endl;
	else
		std::cout << " Robotomy failed on " << m_target << "." << std::endl;
}
