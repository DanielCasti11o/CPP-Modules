/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 13:13:43 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/08/25 16:55:18 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::m_fractBits = 8;

Fixed::Fixed(void)
{
	this->m_numberValue = 0;
}

Fixed::Fixed(const int value)
{
	m_numberValue = value << m_fractBits;
}

Fixed::Fixed(const float value)
{
	float	scaled = value * (1 << m_fractBits);

	if (scaled >= 0.0f)
		m_numberValue = (int)(scaled + 0.5f);
	else
		m_numberValue = (int)(scaled - 0.5f);
}

Fixed::Fixed(const Fixed& value_copy)
{
	*this = value_copy;
}

Fixed::~Fixed(void)
{
}

void	Fixed::setRawBits( int const raw )
{
	this->m_numberValue = raw;
}

int		Fixed::getRawBits( void ) const
{
	return (this->m_numberValue);
}

Fixed&	Fixed::operator=(const Fixed& other)
{
	if (this != &other)
		this->m_numberValue = other.m_numberValue;
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const Fixed& ref)
{
	os << ref.toFloat();
	return (os);
}

float	Fixed::toFloat( void ) const
{
	return ((float)(m_numberValue) / (1 << m_fractBits));
}

int	Fixed::toInt( void ) const
{
	return (m_numberValue >> m_fractBits);
}

// Operators of comparison.

bool	Fixed::operator<(const Fixed& other) const
{
	if (this->m_numberValue < other.m_numberValue)
		return (true);
	else
	return (false);
}

bool	Fixed::operator>(const Fixed& other) const
{
	if (this->m_numberValue > other.m_numberValue)
		return (true);
	else
	return (false);
}

bool	Fixed::operator<=(const Fixed& other) const
{
	if (this->m_numberValue <= other.m_numberValue)
		return (true);
	else
	return (false);
}

bool	Fixed::operator>=(const Fixed& other) const
{
	if (this->m_numberValue >= other.m_numberValue)
		return (true);
	else
	return (false);
}

bool	Fixed::operator==(const Fixed& other) const
{
	if (this->m_numberValue == other.m_numberValue)
		return (true);
	else
	return (false);
}

bool	Fixed::operator!=(const Fixed& other) const
{
	if (this->m_numberValue != other.m_numberValue)
		return (true);
	else
	return (false);
}

// Operators Arithmetics.

Fixed	Fixed::operator+(const Fixed& other) const
{
	Fixed	result;
	result.setRawBits(this->m_numberValue + other.m_numberValue);

	return (result);
}

Fixed	Fixed::operator-(const Fixed& other) const
{
	Fixed	result;
	result.setRawBits(this->m_numberValue - other.m_numberValue);
	return (result);
}

// FLOAT POINT :
// No importa lo que estes guardando el valor se guardara (Value * 256)
// (>> 8) == (multiplication) (256 || 2^8) you know!
// (<< 8) == (division) (256 || 2^8) you know!


Fixed	Fixed::operator*(const Fixed& other) const
{
	Fixed	result;
	result.setRawBits((this->m_numberValue * other.m_numberValue) >> m_fractBits);
	return (result);
}

Fixed	Fixed::operator/(const Fixed& other) const
{
	Fixed	result;
	result.setRawBits((this->m_numberValue / other.m_numberValue) << m_fractBits);
	return (result);
}

// Increase and return

Fixed	Fixed::operator++(void)
{
	this->setRawBits(this->getRawBits() + 1);
	return (*this);
}

// Decrement and return

Fixed	Fixed::operator--(void)
{
	this->setRawBits(this->getRawBits() - 1);
	return (*this);
}

// Return the value and increase it later

Fixed	Fixed::operator++(int value)
{
	Fixed	aux;

	if (!value)
		value = 1;
	aux = *this;
	this->setRawBits(this->getRawBits() + value);
	return (aux);
}

// Return the value and decrement it again

Fixed	Fixed::operator--(int value)
{
	Fixed	aux;

	if (!value)
		value = 1;
	aux = *this;
	this->setRawBits(this->getRawBits() - 1);
	return (aux);
}

// const

const Fixed&	Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a.toFloat() >= b.toFloat())
		return (a);
	else
		return (b);
}

const Fixed&	Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.toFloat() <= b.toFloat())
		return (a);
	else
		return (b);
}

// other

Fixed&	Fixed::max(Fixed &a, Fixed &b)
{
	if (a.toFloat() >= b.toFloat())
		return (a);
	else
		return (b);
}

Fixed&	Fixed::min(Fixed &a, Fixed &b)
{
	if (a.toFloat() <= b.toFloat())
		return (a);
	else
		return (b);
}

float	Fixed::get_value(void) const
{
	return (this->toFloat());
}

void	Fixed::set_value(int const value)
{
	this->m_numberValue = value;
}
