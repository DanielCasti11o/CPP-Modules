/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 12:26:42 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/08/19 17:28:26 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DiamondTrap.hpp"

int main()
{
	DiamondTrap	p1(YELLOW + std::string("Victoria") + RESET);
	DiamondTrap	p2(RED + std::string("Ricardo") + RESET);

	std::cout << std::endl;
	p1.attack(p2.get_named());
	p2.takeDamage(p2.get_handle(p1.DAMAGE));

	p1.lookAtStatistics();
	p2.lookAtStatistics();

	std::cout << std::endl;
	p2.whoAmI();
	std::cout << std::endl;
	p1.whoAmI();
	std::cout << std::endl;
	for (int i = 0; i < 3; i++)
	{
		p1.attack(p2.get_named());
		p2.takeDamage(p1.get_handle(p1.DAMAGE));
	}
	p1.lookAtStatistics();
	p2.lookAtStatistics();
	std::cout << std::endl;
	return (0);
}
