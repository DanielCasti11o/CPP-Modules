/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 18:08:25 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/07/29 14:49:26 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int argc, char **argv)
{
	int		n;
	Zombie	*horde;

	if (argc != 3)
		return (std::cout << "Enter parameters: [1] Number of the zombies. [2] Name of zombie." << std::endl, 0);
	n = std::atoi(argv[1]);
	if (n < 0)
		return (std::cout << "Number of the zombies is necessarily positive" << std::endl, 0);
	horde = zombieHorde(n, argv[2]);
	for (int i = 0; i < n; i++)
		horde[i].announce();
	destroy
	return (0);
}
