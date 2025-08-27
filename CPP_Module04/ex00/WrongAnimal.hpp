/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 17:14:29 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/08/27 17:15:21 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include "Brain.hpp"

class WrongAnimal
{
protected:
	std::string	type;
public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &other);
	virtual ~WrongAnimal();

	WrongAnimal&			operator=(const WrongAnimal& other);
	void	makeSound() const;
	std::string		getType() const;
	virtual Brain&	get_brain(void) const = 0;
};

#endif
