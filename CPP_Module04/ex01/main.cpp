/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 11:55:57 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/08/26 18:21:18 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	Brain	*ref_brain = &j->get_brain();

	ref_brain->set_idea(0, "Hello");
	ref_brain->set_idea(2, "382972897");
	ref_brain->set_idea(3, "9");
	for (int k = 0; k < 4; k++)
		std::cout << ref_brain->get_idea(k) << std::endl;
	delete j;//should not create a leak
	delete i;

	return 0;
}
