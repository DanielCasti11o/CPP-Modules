/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 12:28:36 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/08/19 13:34:53 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
}

DiamondTrap::DiamondTrap(std::string name)
{
	m_name = name;
	set_name(name + "_clap_name");
	set_handle(DAMAGE, 30); // Stat of FragTrap
	set_handle(HIT, 100); // Stat of FragTrap
	set_handle(ENERGY, 50); // Stat of ScavTrap
	std::cout << "DiamondTrap " << name << "is created!" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap& value_copy) : ClapTrap(value_copy)
{
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << get_name() << "is destroyed!" << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap &other)
{
	ClapTrap::operator=(other);
	return (*this);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap name: " << m_name << std::endl;
	std::cout << "ClapTrap name: " << get_name() << std::endl;
}
