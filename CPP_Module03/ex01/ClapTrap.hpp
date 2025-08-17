/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 17:34:34 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/08/17 18:24:18 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

#define BLACK   "\033[30m"
#define RED     "\033[31m"
#define PINK    "\033[35m"
#define RESET   "\033[0m"
#define ORANGE "\033[38;5;208m"

class ClapTrap
{
private:
	std::string		m_name;
	unsigned int	m_Hit_points;
	unsigned int	m_Energy_points;
	unsigned int	m_Attack_damage;
public:
	ClapTrap();
	ClapTrap(std::string name);
	~ClapTrap();

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	enum
	{
		HIT,
		ENERGY,
		DAMAGE
	};

	std::string		get_name();
	unsigned int	get_handle(int type);
	void			lookAtStatistics();
	void			set_handle(int flag, unsigned int newValue);

};


#endif
