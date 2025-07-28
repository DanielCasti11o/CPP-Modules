/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 19:09:49 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/07/28 20:19:36 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}

void	Harl::debug( void )
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, where as you started working here just last month." << std::endl;
}

void	Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain( std::string level )
{
	std::string	possible_level[] = {"ERROR", "WARNING", "INFO", "DEBUG"};
	int			flag;

	flag = -1;
	for(int i = 0; i < 4; i++)
	{
		if (possible_level[i] == level)
		{
			flag = i;
			break ;
		}
	}
	switch (flag)
	{
	case 0:
		this->error();
		break ;
	case 1:
		this->warning();
		break ;
	case 2:
		this->info();
		break ;
	case 3:
		this->debug();
		break ;
	default:
		std::cout << "Unrecognized level!" << std::endl;
		break;
	}
}
