/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 19:06:52 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/08/08 20:23:28 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::m_fractBits = 8;

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->m_numberValue = 0;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	m_numberValue = value << m_fractBits;
}

// We round to see what value it is closest to.
//examples:
// 1.8 + 0.5 = 2.3 = 2
//-2.3 - 0.5 = -2.8 = -2

Fixed::Fixed(const float value)
{
	float	scaled = value * (1 << m_fractBits);

	std::cout << "Float constructor called" << std::endl;
	if (scaled >= 0)
		m_numberValue = (int)(scaled + 0.5f);
	else
		m_numberValue = (int)(scaled - 0.5f);
}

void	Fixed::setRawBits( int const raw )
{
	this->m_numberValue = raw;
}

int		Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->m_numberValue);
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

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

float	Fixed::toFloat( void ) const
{
	return ((float)(m_numberValue) / (1 << m_fractBits));
}

// (1 << fractBits) (division) --> 2^8 = 256.

int	Fixed::toInt( void ) const
{
	return (m_numberValue >> m_fractBits);
}


std::ostream&	operator<<(std::ostream& os, const Fixed& ref)
{
	os << ref.toFloat();
	return (os);
}
