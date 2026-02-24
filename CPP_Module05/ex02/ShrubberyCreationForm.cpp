/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 17:23:11 by daniel-cast       #+#    #+#             */
/*   Updated: 2026/02/21 16:53:30 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery Creation Form", 145, 137), m_target("Letrero")
{

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery Creation Form", 145, 137), m_target(target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	if (this != &other)
	{
		AForm::operator=(other);
		m_target = other.m_target;
	}
	return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm(other), m_target(other.m_target)
{
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (!stateSigned())
		throw FormNotSignedException();
	if (executor.GetGrade() > this->getGradeToExecute())
		throw GradeTooLowException();
	std::ofstream file((m_target + "_shrubbery").c_str());
	if (!file)
		throw std::runtime_error("Failed to open new file!");
	file << "───────────────────────────────\n";
	file << "──────────▄▄▄▄▄▄▄▄▄▄▄──────────\n";
	file << "─────▄▄▀▀▀▀──────────▀▀▄▄──────\n";
	file << "───▄▀───────────────────▀▀▄────\n";
	file << "──█────────────────────────█───\n";
	file << "─█─────────────────────▄▀▀▀▀▀█▄\n";
	file << "█▀────────────────────█────▄███\n";
	file << "█─────────────────────█────▀███\n";
	file << "█─────▄▀▀██▀▄─────────█───────█\n";
	file << "█────█──████─█─────────▀▄▄▄▄▄█─\n";
	file << "█────█──▀██▀─█───────────────█─\n";
	file << "█────█───────█──────────────▄▀─\n";
	file << "█────▀▄─────▄▀──▄▄▄▄▄▄▄▄▄───█──\n";
	file << "█──────▀▀▀▀▀────█─█─█─█─█──▄▀──\n";
	file << "─█──────────────▀▄█▄█▄█▀──▄▀───\n";
	file << "──█──────────────────────▄▀────\n";
	file << "───▀▀▀▄──────────▄▄▄▄▄▄▀▀──────\n";
	file << "────▄▀─────────▀▀──▄▀──────────\n";
	file << "──▄▀───────────────█───────────\n";
	file << "─▄▀────────────────█──▄▀▀▀█▀▀▄─\n";
	file << "─█────█──█▀▀▀▄─────█▀▀────█──█─\n";
	file << "▄█────▀▀▀────█─────█────▀▀───█─\n";
	file << "█▀▄──────────█─────█▄────────█─\n";
	file << "█──▀▀▀▀▀█▄▄▄▄▀─────▀█▀▀▀▄▄▄▄▀──\n";
	file << "█───────────────────▀▄─────────\n";
}
