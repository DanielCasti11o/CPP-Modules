/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 16:00:36 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/07/24 18:12:35 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	m_name = name;
	std::cout << "Zombie: " << m_name << " has been created" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie " << m_name << " has been destroyed" << std::endl;
}

std::string	Zombie::get_name(void)
{
	return(m_name);
}

void	Zombie::set_name(std::string name)
{
	m_name = name;
}

void	Zombie::announce(void)
{
	std::cout << m_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
