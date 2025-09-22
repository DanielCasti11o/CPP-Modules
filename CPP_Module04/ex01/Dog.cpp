/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 11:51:19 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/09/22 17:30:41 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::~Dog(void)
{
	if (brain)
		delete brain;
}

Dog::Dog(const Dog &other) : Animal(other)
{
}

Dog&	Dog::operator=(const Dog &other)
{
	this->type = other.type;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof!" << std::endl;
}

Brain&	Dog::get_brain(void) const
{
	return (*this->brain);
}
