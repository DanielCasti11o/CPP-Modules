/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 17:23:11 by daniel-cast       #+#    #+#             */
/*   Updated: 2026/02/21 13:39:54 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : m_target("Letrero") , AForm("Shrubbery Creation Form", 145, 137)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : m_target(target), AForm("Shrubbery Creation Form", 145, 137)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	this->m_target = other.m_target;
	return (*this);
}

void	ShrubberyCreationForm::beExecuted(Bureaucrat const &executor) const
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
