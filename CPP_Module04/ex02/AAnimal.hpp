/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 18:42:03 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/08/27 17:10:02 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include "Brain.hpp"

class AAnimal
{
protected:
	std::string	type;
public:
	AAnimal();
	AAnimal(const AAnimal &other);
	virtual ~AAnimal();

	AAnimal&			operator=(const AAnimal& other);
	virtual void	makeSound() const = 0;
	std::string		getType() const;
	virtual Brain&	get_brain(void) const = 0;
};

#endif
