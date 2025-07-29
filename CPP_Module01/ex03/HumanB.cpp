/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 17:02:04 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/07/29 15:03:32 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	m_name = name;
	std::cout << m_name << " has been created!" << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << m_name << " has been destroyed!" << std::endl;
}

void	HumanB::attack(void)
{
	std::cout << m_name << " attacks with their " << m_club->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &club)
{
	m_club = &club;
	std::cout << m_name << " has acquired the weapon!" << std::endl;
}
