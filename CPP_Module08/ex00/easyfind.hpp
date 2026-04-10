/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      ::::::::   */
/*                                                    +:+     +:+             */
/*   By: daniel-castillo <daniel-castillo@studen    +#  +:#   .+#             */
/*                                                +#++:++#++:++   +#++:++#++: */
/*   Created: 2026/04/09 16:35:00 by daniel-cast       #+#   #+               */
/*   Updated: 2026/04/10 15:34:00 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <stdexcept>

// Only the declaration of the template.

template <typename T>
typename T::iterator easyfind(T& container, int value);

# include "easyfind.tpp"

#endif
