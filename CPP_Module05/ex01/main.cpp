/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastil <dacastil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 14:51:21 by dacastil          #+#    #+#             */
/*   Updated: 2026/01/27 16:38:18 by dacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat rff("Reffers", 104);
	Form fm("ItalyProject", 102, 107);

	try
	{
		rff.signForm(fm);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

}
