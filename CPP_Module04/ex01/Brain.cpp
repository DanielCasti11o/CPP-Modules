/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 16:12:14 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/08/26 18:04:16 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "The brain has been created." << std::endl;
}

Brain::Brain(const Brain &other)
{
	*this = other;
}

Brain::~Brain(void)
{
	std::cout << "The brain has been destroyed." << std::endl;
}

Brain&	Brain::operator=(const Brain &other)
{
	if (this != &other)
	{
		for (int i = 0; i < 100 ; i++)
			this->ideas[i] = other.ideas[i];
	}
	return (*this);
}

void	Brain::set_idea(int index, std::string idea)
{
	this->ideas[index] = idea;
}

std::string	Brain::get_idea(int index)
{
	return (this->ideas[index]);
}
