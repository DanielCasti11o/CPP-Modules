/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 17:18:56 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/09/16 19:54:05 by daniel-cast      ###   ########.fr       */
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
	
}

void	Character::unequip(int idx)
{

}

void	Character::use(int idx, ICharacter& target)
{

}
