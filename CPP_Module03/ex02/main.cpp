/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 16:52:21 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/08/18 18:55:52 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	FragTrap	a(ORANGE + std::string("Pepito") + RESET);
	FragTrap	b(PINK + std::string("Pepita") + RESET);

	a.lookAtStatistics();
	b.lookAtStatistics();
	for (int i = 0; i < 3; i++)
	{
		a.attack(b.get_name());
		b.takeDamage(a.get_handle(a.DAMAGE));
	}
	a.lookAtStatistics();
	b.lookAtStatistics();
	b.highFivesGuys();
	b.beRepaired(20);
	a.attack(b.get_name());
	b.takeDamage(a.get_handle(a.DAMAGE));
	a.lookAtStatistics();
	b.lookAtStatistics();
	return (0);
}
