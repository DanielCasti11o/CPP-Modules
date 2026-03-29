/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 14:39:33 by daniel-cast       #+#    #+#             */
/*   Updated: 2026/03/29 19:07:36 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"

int main(void)
{

	{
		std::cout << "\n--- Test del Intern ---" << std::endl;
		Intern someRandomIntern;
		AForm* form;

		form = someRandomIntern.makeForm("shrubbery creation", "garden");
		if (form)
			delete form;

		form = someRandomIntern.makeForm("robotomy request", "Bender");
		if (form)
			delete form;

		form = someRandomIntern.makeForm("presidential pardon", "Trillian");
		if (form)
			delete form;

		form = someRandomIntern.makeForm("invalid form", "target");
		(void)form;
	}

	return (0);
}
