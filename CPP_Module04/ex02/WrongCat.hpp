/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 17:17:12 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/08/28 19:25:45 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"
# include "Brain.hpp"

class WrongCat : public WrongAnimal
{
	private:
		Brain *brain;
	public:
		WrongCat();
		WrongCat(const WrongCat &other);
		~WrongCat();
		WrongCat& operator=(const WrongCat& other);
		void	makeSound() const;

		Brain& get_brain(void) const;
};

#endif
