/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 19:16:19 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/09/22 18:18:32 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	// AAnimal*	Abs; Is not posible.
	AAnimal*	dog = new Dog();
	AAnimal*	cat = new Cat();
	WrongAnimal *a = new WrongCat();

	// Abs->makeSound();
	dog->makeSound();
	cat->makeSound();
	a->makeSound();

	delete dog;
	delete cat;
	delete a;
	return (0);
}
