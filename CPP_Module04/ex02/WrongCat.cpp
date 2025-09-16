/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 17:16:33 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/08/28 19:22:12 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
	this->type = "WrongCat";
	this->brain = new Brain();
}

WrongCat::~WrongCat(void)
{
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
}

WrongCat&	WrongCat::operator=(const WrongCat &other)
{
	this->type = other.type;
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Meow!" << std::endl;
}

Brain&	WrongCat::get_brain(void) const
{
	return (*this->brain);
}
