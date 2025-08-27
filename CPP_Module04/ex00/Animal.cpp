/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 18:52:58 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/08/26 12:37:42 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : type("Animal")
{
}

Animal::Animal(const Animal &other)
{
	*this = other;
}

Animal::~Animal(void)
{
}

Animal&	Animal::operator=(const Animal& other)
{
	this->type = other.type;
	return (*this);
}

void	Animal::makeSound(void) const
{
	std::cout << "Sound of any animal." << std::endl;
}

std::string	Animal::getType(void) const
{
	return (this->type);
}
