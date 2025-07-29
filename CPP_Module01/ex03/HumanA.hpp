/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 16:39:04 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/07/29 14:59:21 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <iostream>


class HumanA
{
	private:
		std::string	m_name;
		Weapon		&m_club;
	public:
		HumanA(std::string name, Weapon &club);
		HumanA();
		~HumanA();

	void	attack();
};

#endif
