/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 17:18:56 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/09/19 17:55:29 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
}

Character::~Character(void)
{
}

Character::Character(std::string name) : m_name(name)
{
}

Character::Character(const Character &other)
{
	*this = other;
}

Character&	Character::operator=(const Character &other)
{
	this->m_name = other.m_name;
	for (int i = 0; i < 5 && other.m_inventory[i] ; i++)
		m_inventory[i] = other.m_inventory[i];
	return (*this);
}

// INTERFACE METHODS

std::string const & Character::getName() const
{
	return (m_name);
}

void	Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (m_inventory[i] == NULL)
		{
			m_inventory[i] = m;
			std::cout << m_name << " has acquired a new materia type: " << "!" << std::endl;
			return ;
		}
	}
	std::cout << "The inventory is full!" << std::endl;
	return ;
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 4)
	{
		std::cout << "index" << idx << " isn`t posible" << std::endl;
		return ;
	}
	if (m_inventory[idx])
	{
		std::string name_mat = m_inventory[idx]->getType();
		delete m_inventory[idx];
		std::cout << "Materia " << name_mat << " is eliminated!" << std::endl;
	}
	std::cout << "In this position of the inventory don`t exits anything" << std::endl;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 4)
	{
		std::cout << "index" << idx << " isn`t posible" << std::endl;
		return ;
	}
	if (m_inventory[idx])
	{
		m_inventory[idx]->use(target);
		return ;
	}
	std::cout << "In this position of the inventory don`t exits anything" << std::endl;
}
