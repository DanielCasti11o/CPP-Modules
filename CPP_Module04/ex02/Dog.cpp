/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 11:51:19 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/09/22 17:53:04 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : AAnimal(), brain(new Brain())
{
	this->type = "Dog";
}

Dog::~Dog(void)
{
	delete brain;
}

Dog::Dog(const Dog &other) : AAnimal(other)
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
