/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 19:22:48 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/07/28 19:25:39 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	std::string	arg;
	Harl		harl_level;

	if (argc != 2)
	{
		std::cout << "Invalid arguments!" << std::endl;
		return (0);
	}
	arg = argv[1];
	harl_level.complain(arg);
	return (0);
}
