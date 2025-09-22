/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 19:38:46 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/09/22 18:26:52 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
}

Ice::Ice(const Ice &other) : AMateria(other.m_type)
{

}

Ice::~Ice(void)
{
}

const Ice&	Ice::operator=(const Ice &other)
{
	this->m_type = other.m_type;
	return (*this);
}

AMateria*	Ice::clone(void) const
{
	return new Ice(*this);
}

void	Ice::use(ICharacter &target)
{
	std::cout << BrigthBlue << "* shoots an ice bolt at " << target.getName() << " *" << Reset << std::endl;
}
