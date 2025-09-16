/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 18:59:47 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/08/28 19:19:40 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{
	private:
		Brain *brain;
	public:
		Cat();
		Cat(const Cat &other);
		~Cat();
		Cat& operator=(const Cat& other);
		void	makeSound() const;

		Brain& get_brain(void) const;
};

#endif
