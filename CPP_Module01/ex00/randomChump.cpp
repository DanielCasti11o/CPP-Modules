/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 16:15:28 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/07/24 17:56:00 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// This is saved on the stack, therefore, the memory is automatically freed when the program ends.

void	randomChump( std::string name )
{
	Zombie new_zombie(name);

	new_zombie.announce();
}
