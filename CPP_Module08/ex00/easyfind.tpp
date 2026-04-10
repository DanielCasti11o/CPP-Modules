/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                      :+:      ::::::::   */
/*                                                    +:+     +:+             */
/*   By: daniel-castillo <daniel-castillo@studen    +#  +:#   .+#             */
/*                                                +#++:++#++:++   +#++:++#++: */
/*   Created: 2026/04/09 16:35:00 by daniel-cast       #+#   #+               */
/*   Updated: 2026/04/10 15:34:00 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_TPP
# define EASYFIND_TPP

template <typename T>
typename T::iterator easyfind(T& container, int value)
{
	typename T::iterator it = std::find(container.begin(), container.end(), value);
	if (it == container.end())
		throw std::runtime_error("Value not found");
	return it;
}

#endif
