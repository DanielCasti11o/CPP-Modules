/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/29 14:44:41 by daniel-cast       #+#    #+#             */
/*   Updated: 2026/03/29 19:14:19 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
}

Intern::Intern(const Intern& src)
{
	(void)src;
}

Intern& Intern::operator=(const Intern& rhs)
{
	(void)rhs;
	return (*this);
}

static AForm* createShrubbery(std::string target)
{
	return new ShrubberyCreationForm(target);
}

static AForm* createRobotomy(std::string target)
{
	return new RobotomyRequestForm(target);
}

static AForm* createPardon(std::string target)
{
	return new PresidentialPardonForm(target);
}

AForm* Intern::makeForm(std::string formName, std::string target)
{
	// List of form names and corresponding creation functions.
	std::string formNames[] =
	{
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};
	// Array of pointers to functions that create forms.
	AForm* (*formCreators[])(std::string) =
	{
		&createShrubbery,
		&createRobotomy,
		&createPardon
	};
	for (int i = 0; i < 3; i++)
	{
		if (formName == formNames[i])
		{
			std::cout << "Intern creates " << formName << std::endl;
			return formCreators[i](target);
		}
	}
	std::cerr << "Error: Intern cannot create form '" << formName << "' (unknown name)" << std::endl;
	return NULL;
}
