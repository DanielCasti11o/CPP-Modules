/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 21:45:25 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/08/19 17:31:27 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
		std::cout << YELLOW << "ScavTrap from ClapTrap " << get_name() << YELLOW << " is created!" << RESET << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	set_handle(HIT, 100);
	set_handle(ENERGY, 50);
	set_handle(DAMAGE, 20);
	std::cout << YELLOW << "ScavTrap from ClapTrap " << get_name() << YELLOW << " is created!" << RESET << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& other)
{
	ClapTrap::operator=(other);
	return (*this);
}

ScavTrap::ScavTrap(const ScavTrap& value_copy) : ClapTrap(value_copy)
{
}

ScavTrap::~ScavTrap()
{
	std::cout << YELLOW << "ScravTrap from ClapTrap " << get_name() << YELLOW << " is destroyed!" << RESET << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << YELLOW << "ScavTrap " << get_name() << YELLOW << " is now in Gate keeper mode." << RESET << std::endl;
}

void		ScavTrap::attack(std::string target)
{
	if (!m_Hit_points || m_Hit_points > 101)
	{
		std::cout << RED << "ScavTrap " << m_name << RED << " is destroyed and can’t take any action!" << RESET << std::endl;
		m_Hit_points = 0;
		return ;
	}
	if (!m_Energy_points)
	{
		std::cout << "ScavTrap " << m_name << " has no energy left to do anything!";
		return ;
	}
	m_Energy_points--;
	std::cout << "ScavTrap " << m_name << " attacks " << target << ", causing " << m_Attack_damage << " points of damage!" << std::endl;
}
