/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 17:01:14 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/07/29 15:00:18 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &club): m_name(name), m_club(club)
{
	std::cout << m_name << " has been created with armor!" << std::endl;
}

HumanA::~HumanA()
{
	std::cout << m_name << " has been destroyed!" << std::endl;
}

void	HumanA::attack(void)
{
	if (m_club.getType() != "")
		std::cout << m_name << " attacks with their " << m_club.getType() << std::endl;
	else
		std::cout << m_name << " doesn't have club" << std::endl;
}




