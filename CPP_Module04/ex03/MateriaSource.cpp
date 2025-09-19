/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 19:54:52 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/09/19 18:03:18 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource(void)
{
}

MateriaSource::~MateriaSource(void)
{
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (type == "Ice" && m_templates[i]->getType() == "Ice")
			return (m_templates[i]->clone());
		else if (type == "Cure" && m_templates[i]->getType() == "Cure")
			return (m_templates[i]->clone());
	}
	return (NULL);
}

void	MateriaSource::learnMateria(AMateria* m)
{
	std::cout << "dd" << m_templates[1]->getType() << std::endl;
	for (int i = 0; i < 4; i++)
	{
		std::cout << "hi!" << std::endl;
		if (m->getType() == "Ice" && (m_templates[i]->getType() != "Ice" || m_templates[i]->getType() != "Cure"))
		{
			std::cout << "enter" << std::endl;
			m_templates[i] = new Ice();
			return ;
		}
		if (m->getType()== "Cure" && m_templates[i] == NULL)
		{
			std::cout << "STart!" << std::endl;
			m_templates[i] = new Cure();
			return ;
		}
	}
	std::cout << "The inventory is full!" << std::endl;
	return ;
}
