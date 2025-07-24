/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 18:14:36 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/07/24 19:37:48 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <cstdlib>

# define destroy for (int j = 0; j < n; j++) std::cout << "Zombie " << j << " has been destroyed" << std::endl; delete[] horde;

class Zombie
{
	private:
		std::string	m_name;
		int			m_index;
	public:
		Zombie(void);
		Zombie(std::string name, int index);
		~Zombie();

		void	announce(void);
};

Zombie*	zombieHorde( int N, std::string name );

#endif
