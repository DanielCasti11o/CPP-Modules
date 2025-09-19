/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 12:08:35 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/09/19 17:54:55 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::~AMateria()
{
}

AMateria::AMateria(const std::string &type): m_type(type)
{
}

AMateria::AMateria(const AMateria &other)
{
	*this = other;
}

AMateria&			AMateria::operator=(const AMateria &other)
{
	this->m_type = other.m_type;
	return (*this);
}

std::string const & AMateria::getType(void) const
{
	return (this->m_type);
}


