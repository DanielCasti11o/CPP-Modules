/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 21:42:23 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/08/19 17:03:46 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void	win_p1(ScavTrap &p1, ScavTrap &p2)
{
		p1.attack(p2.get_name());
		p2.takeDamage(p1.get_handle(p1.DAMAGE));
		p1.lookAtStatistics();
		p2.lookAtStatistics();
		// next
		p2.attack(p1.get_name());
		p1.takeDamage(p2.get_handle(p2.DAMAGE));
		p1.lookAtStatistics();
		p2.lookAtStatistics();
		// next
		p1.guardGate();
		for (int i = 0; i < 3; i++)
		{
			p1.attack(p2.get_name());
			p2.takeDamage(p1.get_handle(p1.DAMAGE));
		}
		p1.beRepaired(20);
		p1.lookAtStatistics();
		p2.lookAtStatistics();
		//next
		p2.attack(p1.get_name());
		p1.takeDamage(p2.get_handle(p2.DAMAGE));
		p1.lookAtStatistics();
		p2.lookAtStatistics();
		// fin
		p1.attack(p2.get_name());
		p2.takeDamage(p1.get_handle(p2.DAMAGE));
		p1.lookAtStatistics();
		p2.lookAtStatistics();
}

void	win_p2(ScavTrap &p1, ScavTrap &p2)
{
		for (int i = 0; i < 2; i++)
		{
			p2.attack(p1.get_name());
			p1.takeDamage(p2.get_handle(p2.DAMAGE));
		}
		p1.takeDamage(p2.get_handle(p2.DAMAGE));
		p1.lookAtStatistics();
		p2.lookAtStatistics();
		// next
		p1.attack(p2.get_name());
		p2.takeDamage(p1.get_handle(p1.DAMAGE));
		p1.lookAtStatistics();
		p2.lookAtStatistics();
		// next
		p2.guardGate();
		for (int i = 0; i < 2; i++)
		{
			p2.attack(p1.get_name());
			p1.takeDamage(p2.get_handle(p2.DAMAGE));
		}
		p2.beRepaired(20);
		p1.lookAtStatistics();
		p2.lookAtStatistics();
		// fin
}


void	Battle(int winner, ScavTrap &p1, ScavTrap &p2)
{
	p1.lookAtStatistics();
	p2.lookAtStatistics();
	if (winner == PLAYER_1)
	{
		win_p1(p1, p2);
		std::cout << RED << "The winner is: " << p1.get_name() << std::endl;
	}
	else if (winner == PLAYER_2)
	{
		win_p2(p1, p2);
		std::cout << PINK << "The winner is: " << p2.get_name() << std::endl;
	}
		else if (winner == A_TIE)
		std::cout << YELLOW << "A tie is impossible in a turn-based battle. :D" << RESET << std::endl;
	else
		std::cout << "This option is not valid!" << std::endl;

}

int	main(int argc, char **argv)
{
	if (argc != 4)
		return (std::cout << "Is necessary 3 args. Av[1] = Player 1 && Av[2] = Player 2" << std::endl << "And you can choose who win Av[3] = 1 or 2, 0 is a tie" << std::endl, 0);
	ScavTrap	p1(RED + std::string(argv[1]) + RESET);
	ScavTrap	p2(PINK + std::string(argv[2]) + RESET);

	Battle(std::atoi(argv[3]), p1, p2);
	return (0);
}
