/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 17:15:41 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/08/28 19:07:58 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type("WrongAnimal")
{
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	*this = other;
}

WrongAnimal::~WrongAnimal(void)
{
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& other)
{
	this->type = other.type;
	return (*this);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Sound of any animal." << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->type);
}
