/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 12:05:17 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/09/22 11:01:10 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <cstdlib>
# include "ICharacter.hpp"

# define BrigthBlue "\033[94m"
# define Red "\033[31m"
# define Reset "\033[0m"

class AMateria
{
protected:
	std::string	m_type;
public:
	AMateria();
	AMateria(const AMateria &other);
	AMateria(std::string const &type);
	virtual ~AMateria();

	AMateria&			operator=(const AMateria &other);
	std::string const &	getType() const; //Returns the materia type
	virtual AMateria*	clone() const = 0;
	virtual void		use(ICharacter& target) = 0;
};


#endif
