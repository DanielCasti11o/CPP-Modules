/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 18:08:25 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/07/24 19:37:55 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int argc, char **argv)
{
	int	n;
	Zombie	*horde;

	if (argc != 3)
		return (0);
	n = std::atoi(argv[1]);
	horde = zombieHorde(n, argv[2]);
	for (int i = 0; i < n; i++)
		horde[i].announce();
	destroy
	return (0);
}
