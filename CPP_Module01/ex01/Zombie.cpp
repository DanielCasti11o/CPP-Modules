/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 18:35:09 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/07/24 19:31:19 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
}

Zombie::Zombie(std::string name, int index)
{
	m_index = index;
	m_name = name;
	std::cout << "Zombie " << m_index << " has been created" << std::endl;
}

Zombie::~Zombie()
{
}

void	Zombie::announce(void)
{
	std::cout << "Index " << m_index << " " << m_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
