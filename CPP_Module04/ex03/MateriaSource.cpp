/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 19:54:52 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/09/22 11:15:51 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource(void)
{
	for (size_t i = 0; i < 4; i++)
	{
		m_templates[i] = NULL;
	}

}

MateriaSource::~MateriaSource(void)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (m_templates[i])
			delete m_templates[i];
	}

}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (m_templates[i] && type == "ice" && m_templates[i]->getType() == "ice")
			return (m_templates[i]->clone());
		else if (m_templates[i] && type == "cure" && m_templates[i]->getType() == "cure")
			return (m_templates[i]->clone());
	}
	return (NULL);
}

void	MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!m_templates[i])
		{
			m_templates[i] = m;
			return ;
		}
	}
	std::cout << "The inventory is full!" << std::endl;
	return ;
}
