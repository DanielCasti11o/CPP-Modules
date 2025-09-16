/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 19:16:19 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/09/02 17:13:19 by daniel-cast      ###   ########.fr       */
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
	// AAnimal*	Abs;
	AAnimal*	dog = new Dog();
	AAnimal*	cat = new Cat();

	// Abs->makeSound();
	dog->makeSound();
	cat->makeSound();

	delete dog;
	delete cat;
	return (0);
}
