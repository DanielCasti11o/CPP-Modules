/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 19:14:03 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/09/22 18:27:58 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
}

Cure::Cure(const Cure &other) : AMateria(other.m_type)
{
}

Cure::~Cure(void)
{
}

const Cure&	Cure::operator=(const Cure &other)
{
	this->m_type = other.m_type;
	return (*this);
}

AMateria*	Cure::clone(void) const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter &target)
{
	std::cout << Red << "* heals " << target.getName() << "’s wounds *" << Reset << std::endl;
}
