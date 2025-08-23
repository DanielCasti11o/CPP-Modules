/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 18:58:09 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/08/23 19:12:14 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog
{
private:
	/* data */
public:
	Dog(/* args */);
	~Dog();

	Dog&	operator=(const Dog& other);
	void	makeSound();
};

#endif
