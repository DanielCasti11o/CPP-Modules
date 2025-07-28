/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 16:39:19 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/07/26 15:47:17 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string str)
{
	m_nameType = str;
}

Weapon::Weapon(void)
{
}

Weapon::~Weapon(void)
{
}

void		Weapon::setType(std::string nameType)
{
	m_nameType = nameType;
}

std::string	Weapon::getType(void)
{
	return (m_nameType);
}

