/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 20:51:08 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/07/17 21:15:35 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main(void)
{
	Phonebook	phb;
	std::string	str;

	while (str != "EXIT")
	{
		std::cout << "Enter the command >";
		std::getline(std::cin, str);
		if (str == "ADD")
			phb.add_contact();
		if (str == "SEARCH")
			phb.search();
		if (!std::cin.eof())
		{
			std::cout << std::endl;
			return (0);
		}
	}
	return (0);
}
