/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 18:42:03 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/08/23 19:12:32 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>
# include <cstdlib>

class Animal
{
protected:
	std::string	type;
public:
	Animal();
	~Animal();

	Animal&	operator=(const Animal& other);
	void	makeSound();
};

#endif
