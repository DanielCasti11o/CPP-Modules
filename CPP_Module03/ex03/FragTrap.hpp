/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 15:15:40 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/08/19 12:45:51 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FRAGTRAP_HPP
# define FRAGTRAP_HPP

# define BLUE "\033[34m"
# define RESET "\033[0m"

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap();
		FragTrap(const std::string &name);
		~FragTrap();
		FragTrap(const FragTrap& value_copy);

		FragTrap&	operator=(const FragTrap& other);
		void		highFivesGuys(void);
};

#endif
