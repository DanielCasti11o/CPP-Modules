/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 19:35:26 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/07/28 20:06:29 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	std::string	arg;
	Harl		harl_filter;

	if (argc != 2)
	{
		std::cout << "Invalid arguments!" << std::endl;
		return (0);
	}
	arg = argv[1];
	harl_filter.complain(arg);
	return (0);
}
