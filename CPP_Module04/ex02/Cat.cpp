/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 11:46:56 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/08/26 17:56:41 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::~Cat(void)
{
}

Cat::Cat(const Cat &other) : Animal(other)
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
