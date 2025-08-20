/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 12:28:36 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/08/20 16:17:21 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name + "_clap_name"), ScavTrap(name + "_clap_name")
{
	m_name = name;
	m_Attack_damage = FragTrap::m_Attack_damage;
	m_Hit_points = FragTrap::m_Hit_points;
	m_Energy_points = ScavTrap::m_Energy_points;
	std::cout << ORANGE << "DiamondTrap " << name << ORANGE << " is created!" << RESET << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap& value_copy) : ClapTrap(value_copy), FragTrap(value_copy), ScavTrap(value_copy)
{
}

DiamondTrap::~DiamondTrap()
{
	std::cout << PURPLE << "DiamondTrap " << get_name() << PURPLE << " is destroyed!" << RESET << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap &other)
{
	ClapTrap::operator=(other);
	return (*this);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << BLUE << "DiamondTrap name: " << m_name << RESET << std::endl;
	std::cout << BLUE << "ClapTrap name: " << get_name() << RESET << std::endl;
}

std::string	DiamondTrap::get_named(void)
{
	return (m_name);
}
