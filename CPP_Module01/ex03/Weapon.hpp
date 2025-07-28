/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 16:48:06 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/07/25 19:04:02 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <cstdlib>

class Weapon
{
	private:
		std::string m_nameType;
	public:
		Weapon(std::string str);
		Weapon(void);
		~Weapon();

		void		setType(std::string nameType);
		std::string	getType(void);
};


#endif
