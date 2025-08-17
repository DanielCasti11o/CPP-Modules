/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 21:45:25 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/08/17 20:10:24 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	set_handle(HIT, 100);
	set_handle(ENERGY, 50);
	set_handle(DAMAGE, 20);
	std::cout << YELLOW << "ScaTrap from ClapTrap " << get_name() << YELLOW << " is created!" << RESET << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << YELLOW << "ScravTrap from ClapTrap " << get_name() << YELLOW << " is destroyed!" << RESET << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << YELLOW << "ScavTrap " << get_name() << YELLOW << " is now in Gate keeper mode." << RESET << std::endl;
}
