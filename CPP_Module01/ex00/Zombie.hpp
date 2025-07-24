/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 15:56:34 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/07/24 18:29:56 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# define Zombie1 zombie_1 = newZombie("Loruzqui"); zombie_1->announce();
# define Randomchump randomChump("Gafreire");

# include <iostream>

class Zombie
{
private:
	std::string m_name; // m_ = member
public:
	Zombie(std::string name);
	~Zombie();

	std::string	get_name(void);
	void		set_name(std::string name);
	void		announce(void);
};

	Zombie*	newZombie( std::string name );
	void	randomChump( std::string name );

#endif
