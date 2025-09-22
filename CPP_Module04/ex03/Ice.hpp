/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 12:04:45 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/09/22 18:20:22 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice :  public AMateria
{
public:
	Ice();
	Ice(const Ice &other);
	~Ice();

	const Ice&	operator=(const Ice &other);
	AMateria*	clone() const;
	void		use(ICharacter& target);
};


#endif
