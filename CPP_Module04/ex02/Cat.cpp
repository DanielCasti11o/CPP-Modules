/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 11:46:56 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/08/28 19:26:11 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : AAnimal()
{
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::~Cat(void)
{
}

Cat::Cat(const Cat &other) : AAnimal(other)
{
}

Cat&	Cat::operator=(const Cat &other)
{
	this->type = other.type;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow!" << std::endl;
}

Brain&	Cat::get_brain(void) const
{
	return (*this->brain);
}
