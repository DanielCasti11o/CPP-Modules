/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 18:09:05 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/07/24 19:10:23 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie	*zombie_Horde;

	zombie_Horde = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		zombie_Horde[i] = Zombie(name, i);
	}
	return (zombie_Horde);
}
