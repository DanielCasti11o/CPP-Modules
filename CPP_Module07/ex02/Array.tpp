/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          #:+:    :+#:+#  */
/*                                                    #+#  #+# #+#           */
/*   By: daniel-castillo <daniel-castillo@studen    #+#  #+# #+#             */
/*   Updated: 2026/04/08 00:14:11 by daniel-cast    ###  ########.fr           */
/*                                                                            */
/* ************************************************************************** */

#include <stdexcept>
#include "Array.hpp"

template<typename T>
Array<T>::Array() : m_array(NULL), m_size(0)
{
}

// new T[n]() initializes all elements to their default value (0 for basic types, default constructor for classes)

// m_array = new T[n];
// for (unsigned int i = 0; i < n; i++)
// 		m_array[i] = 0;

template<typename T>
Array<T>::Array(unsigned int n) : m_array(new T[n]()), m_size(n)
{
}

template<typename T>
Array<T>::Array(const Array& other) : m_array(NULL), m_size(0)
{
	*this = other;
}

template<typename T>
Array<T>& Array<T>::operator=(const Array& other)
{
	if (this != &other)
	{
		if (m_array)
			delete[] m_array;
		m_size = other.m_size;
		m_array = new T[m_size]();
		for (unsigned int i = 0; i < m_size; i++)
			m_array[i] = other.m_array[i];
	}
	return (*this);
}

template<typename T>
Array<T>::~Array()
{
	delete[] m_array;
}

template<typename T>
T& Array<T>::operator[](unsigned int idx)
{
	if (idx >= m_size)
		throw std::out_of_range("Array index out of bounds");
	return (m_array[idx]);
}

template<typename T>
const T& Array<T>::operator[](unsigned int idx) const
{
	if (idx >= m_size)
		throw std::out_of_range("Array index out of bounds");
	return (m_array[idx]);
}

template<typename T>
unsigned int Array<T>::size() const
{
	return (m_size);
}

