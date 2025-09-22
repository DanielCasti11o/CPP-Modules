/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 12:08:20 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/09/22 18:08:06 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->learnMateria(new Ice());
	src->learnMateria(new Ice());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	for (int i = 0; i < 2; i++)
	{
		tmp = src->createMateria("ice");
		me->equip(tmp);
	}
	for (int i = 0; i < 2; i++)
	{
		tmp = src->createMateria("cure");
		me->equip(tmp);
	}
	ICharacter* bob = new Character("bob");
	for (int i = 0; i < 4; i++)
	{
		me->use(i, *bob);
	}
	delete bob;
	delete me;
	delete src;
	return 0;
}
