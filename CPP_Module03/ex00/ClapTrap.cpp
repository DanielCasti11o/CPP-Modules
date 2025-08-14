/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 17:36:07 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/08/14 18:28:12 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	m_name = "nil son";
	m_Attack_damage = 0;
	m_Energy_points = 10;
	m_Hit_points = 10;
}

ClapTrap::ClapTrap(std::string name)
{
	m_name = name;
	m_Attack_damage = 0;
	m_Energy_points = 10;
	m_Hit_points = 10;
}

void	ClapTrap::attack(const std::string& target)
{
	m_Energy_points--;
	std::cout << "ClapTrap " << m_name << " attacks" << target << ", causing " << m_Attack_damage << "points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	m_Hit_points -= amount;
	std::cout << "ClapTrap " << m_name << " takes " << amount << " damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	m_Hit_points += amount;
	m_Energy_points --;
	std::cout <<"ClapTrap" << m_name << "repairs itself for " << amount << " hit points!" << std::endl;
}
