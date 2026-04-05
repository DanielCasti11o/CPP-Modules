/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 14:57:46 by daniel-cast       #+#    #+#             */
/*   Updated: 2026/04/05 16:01:43 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <stdint.h>

# define BLUE "\033[0;34m"
# define YELLOW "\033[0;33m"
# define RESET "\033[0m"

class Serializer
{
	private: // No Instantiable Class
		Serializer();
		~Serializer();
		Serializer(const Serializer& src);
		Serializer& operator=(const Serializer& rhs);
	public:
		struct Data
		{
			int			id;
			std::string	name;
		};

		// Static Methods
		static uintptr_t	serialize(Data* ptr);
		static Data* 		deserialize(uintptr_t raw);
};

#endif
