/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 18:40:23 by daniel-cast       #+#    #+#             */
/*   Updated: 2026/04/07 23:11:56 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <cstdlib>

// Version NO_CONST // Is possible changes

template<typename T>
void	iter(T* array, const size_t length, void (*func)(T&))
{
	for (size_t i = 0; i < length; i++)
		func(array[i]);
}

// Version CONST // Is not possible changes

template<typename T>
void	iter(const T* array, const size_t length, void (*func)(const T&))
{
	for (size_t i = 0; i < length; i++)
		func(array[i]);
}

#endif
