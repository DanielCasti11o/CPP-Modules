/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 15:09:33 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/08/06 19:02:42 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::m_fractBits = 8;

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->m_numberValue = 0;
}

Fixed& Fixed::operator=(Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->m_numberValue = other.getRawBits();
	return (*this);
}

Fixed::Fixed(Fixed& value_copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = value_copy;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
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
