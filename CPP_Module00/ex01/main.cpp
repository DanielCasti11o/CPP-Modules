/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastil <dacastil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 20:51:08 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/07/19 13:54:32 by dacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main(void)
{
	Phonebook	phb;
	std::string	str;

	while (str != "EXIT")
	{
		std::cout << "Enter the command > ";
		std::getline(std::cin, str);
		if (str != "EXIT" && str != "ADD" && str != "SEARCH")
			std::cout << "Invalid command!" << std::endl;
		if (str == "ADD")
			phb.add_contact();
		if (str == "SEARCH")
			phb.search();
		if (std::cin.eof())
		{
			std::cout << std::endl;
			return (0);
		}
	}
	return (0);
}
