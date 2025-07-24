/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 16:12:53 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/07/24 17:54:50 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// new -> is the C++ malloc and for this you do not need to reserve each space in the structure since new does it all.

Zombie*	newZombie( std::string name )
{
	Zombie *new_zombie;

	new_zombie = new Zombie(name);
	return (new_zombie);
}
