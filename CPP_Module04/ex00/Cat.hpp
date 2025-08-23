/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 18:59:47 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/08/23 19:09:15 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Cat.hpp"

class Cat
{
private:
	/* data */
public:
	Cat(/* args */);
	~Cat();

	Cat& operator=(const Cat& other);
	void	makeSound();
};

#endif
