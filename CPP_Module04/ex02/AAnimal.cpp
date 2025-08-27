/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 18:52:58 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/08/27 17:10:57 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void) : type("Animal")
{
}

AAnimal::AAnimal(const AAnimal &other)
{
	*this = other;
}

AAnimal::~AAnimal(void)
{
}

AAnimal&	AAnimal::operator=(const AAnimal& other)
{
	this->type = other.type;
	return (*this);
}

void	AAnimal::makeSound(void) const
{
	std::cout << "Sound of any animal." << std::endl;
}

std::string	AAnimal::getType(void) const
{
	return (this->type);
}

