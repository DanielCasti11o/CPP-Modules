/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 21:42:34 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/08/19 17:34:33 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <string>
# include <cstdlib>

#define YELLOW "\033[33m"
#define PURPLE "\033[35m"

class ScavTrap : virtual public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(const std::string& target);
	ScavTrap(const ScavTrap& value_copy);
	~ScavTrap();

	ScavTrap&	operator=(const ScavTrap& other);
	void		guardGate();
	void		attack(std::string target);
};

enum	win
{
	A_TIE,
	PLAYER_1,
	PLAYER_2
};

#endif
