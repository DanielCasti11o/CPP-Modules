/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 23:33:41 by daniel-cast       #+#    #+#             */
/*   Updated: 2026/04/07 23:46:53 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# define YELLOW "\033[33m"
# define BLUE "\033[34m"
# define GREEN "\033[32m"
# define RED "\033[31m"
# define PINK "\033[35m"
# define RESET "\033[0m"

template<typename T>
class Array
{
private:
	T*				m_array;
	unsigned int	m_size;

public:
	Array();
	Array(unsigned int n);
	Array(const Array& other);
	~Array();

	Array&			operator=(const Array& other);
	T&				operator[](unsigned int index);
	const T&		operator[](unsigned int index) const;
	unsigned int	size() const;
};

#include "Array.tpp"

#endif
