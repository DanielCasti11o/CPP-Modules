/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 15:56:15 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/08/18 18:56:17 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << BLUE << "FragTrap from ClapTrap " << get_name() << BLUE << " is created!" << RESET << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
	set_handle(HIT, 100);
	set_handle(ENERGY, 100);
	set_handle(DAMAGE, 30);
	std::cout << BLUE << "FragTrap from ClapTrap " << get_name() << BLUE << " is created!" << RESET << std::endl;
}

FragTrap::FragTrap(const FragTrap& value_copy) : ClapTrap(value_copy)
{
		std::cout << BLUE << "FragTrap from ClapTrap " << get_name() << BLUE << " is created for copy!" << RESET << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& other)
{
	ClapTrap::operator=(other);
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << BLUE << "FragTrap from ClapTrap " << get_name() << BLUE << " is destroyed!" << RESET << std::endl;
}

void		FragTrap::highFivesGuys(void)
{
	std::cout << BLUE << "FragTrap " << get_name() << BLUE << " requests a positive high five!" << RESET << std::endl;
}
