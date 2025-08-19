/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 17:36:07 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/08/19 13:33:05 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	m_name = "nil son";
	m_Attack_damage = 3;
	m_Energy_points = 10;
	m_Hit_points = 10;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << GREEN << "ClapTrap " << name << GREEN << " is created!" << RESET << std::endl;
	m_name = name;
	m_Attack_damage = 3;
	m_Energy_points = 10;
	m_Hit_points = 10;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& other)
{
	if (this != &other)
	{
		this->m_name = other.m_name;
		m_Attack_damage = other.m_Attack_damage;
		m_Energy_points = other.m_Energy_points;
		m_Hit_points = other.m_Hit_points;
	}
	return (*this);
}

ClapTrap::ClapTrap(const ClapTrap& value_copy)
{
	*this = value_copy;
}

ClapTrap::~ClapTrap()
{
	std::cout << RED << "ClapTrap " << get_name() << RED << " is destroyed!" << RESET << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (!m_Hit_points || m_Hit_points > 101)
	{
		std::cout << RED << "ClapTrap " << m_name << RED << " is destroyed and can’t take any action!" << RESET << std::endl;
		m_Hit_points = 0;
		return ;
	}
	if (!m_Energy_points)
	{
		std::cout << "ClapTrap " << m_name << " has no energy left to do anything!";
		return ;
	}
	m_Energy_points--;
	std::cout << "ClapTrap " << m_name << " attacks " << target << ", causing " << m_Attack_damage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	m_Hit_points -= amount;
	if (!m_Hit_points || m_Hit_points > 101)
	{
		std::cout << RED << "ClapTrap " << m_name << RED << " is destroyed and can’t take any action!" << RESET << std::endl;
		m_Hit_points = 0;
		return ;
	}
	std::cout << "ClapTrap " << m_name << " takes " << amount << " damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!m_Hit_points || m_Hit_points > 101)
	{
		std::cout << RED << "ClapTrap " << m_name << RED << " is destroyed and can’t take any action!" << RESET << std::endl;
		m_Hit_points = 0;
		return ;
	}
	if (!m_Energy_points)
	{
		std::cout << "ClapTrap " << m_name << " has no energy left to do anything!" << std::endl;
		return ;
	}
	m_Hit_points += amount;
	m_Energy_points--;
	std::cout <<"ClapTrap " << m_name << " repairs itself for " << amount << " hit points!" << std::endl;
}

// Getters

std::string	ClapTrap::get_name(void)
{
	return (this->m_name);
}

unsigned int	ClapTrap::get_handle(int type)
{
	if (type == HIT)
		return (this->m_Hit_points);
	else if (type == ENERGY)
		return (this->m_Energy_points);
	else if (type == DAMAGE)
		return (this->m_Attack_damage);
	else
		return (-1);
}

void	ClapTrap::lookAtStatistics()
{
	std::cout << std::endl << get_name() << BLACK << " - Hit points: " << RED << get_handle(HIT) << RESET << std::endl;
	std::cout << get_name() << BLACK << " - Attack damage: " << RED << get_handle(DAMAGE) << RESET<< std::endl;
	std::cout << get_name() << BLACK << " - Energy points: " << RED << get_handle(ENERGY) << RESET<< std::endl;
}


// setter

void	ClapTrap::set_handle(int flag, unsigned int newValue)
{
	if (flag == DAMAGE)
	{
		// if (m_Attack_damage < newValue)
		// 	std::cout << m_name << " gets angry and increases her attack damage +" << newValue << std::endl;
		// else
		// 	std::cout << m_name << " is weaker and her attack damage is lowered to -" << newValue << std::endl;
		m_Attack_damage = newValue;
	}
	else if (flag == HIT)
		m_Hit_points = newValue;
	else if (flag == ENERGY)
		m_Energy_points = newValue;
	else
		return ;
}

void	ClapTrap::set_name(std::string name)
{
	m_name = name;
}
