/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 18:42:03 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/08/27 17:09:31 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include "Brain.hpp"

class Animal
{
protected:
	std::string	type;
public:
	Animal();
	Animal(const Animal &other);
	virtual ~Animal();

	Animal&			operator=(const Animal& other);
	virtual void	makeSound() const;
	std::string		getType() const;
	virtual Brain&	get_brain(void) const = 0;
};

#endif
