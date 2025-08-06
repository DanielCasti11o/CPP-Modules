/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 19:06:52 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/08/06 20:09:11 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	m_numberValue = value;
}

Fixed::Fixed(const float value)
{
	std::cout << "Int constructor called" << std::endl;
	m_numberValue = value;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->m_numberValue = other.m_numberValue;
	return (*this);
}

Fixed::Fixed(const Fixed& value_copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = value_copy;
}

float	Fixed::toFloat( void ) const
{
	return (static_cast <float>(m_numberValue) / (1 << m_fractBits));
}

// (1 << fractBits) quiere decir --> 2^8 = 256.
// lo que pasa es que se multiplica por 256 al principio y se redondea el float y despues lo dividimos por el mismo y nos da el float que tendremos al final.


int	Fixed::toInt( void ) const
{
	return (m_numberValue >> m_fractBits);
}


std::ostream&	Fixed::operator<<(const Fixed& ref)
{

}
