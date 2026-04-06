/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastil <dacastil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 18:40:23 by daniel-cast       #+#    #+#             */
/*   Updated: 2026/04/06 18:18:45 by dacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <cstdlib>

// Version NO_CONST

template<typename T>
void	iter(T* array, size_t length, void (*func)(T&));

// Version CONST



#endif
