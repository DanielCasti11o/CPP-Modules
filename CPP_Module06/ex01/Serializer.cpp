/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 14:59:01 by daniel-cast       #+#    #+#             */
/*   Updated: 2026/04/05 15:51:30 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
}

Serializer::~Serializer()
{
}

Serializer::Serializer(const Serializer& src)
{
	(void)src;
}

Serializer& Serializer::operator=(const Serializer& rhs)
{
	(void)rhs;
	return (*this);
}

uintptr_t	Serializer::serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Serializer::Data* Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Serializer::Data*>(raw));
}
