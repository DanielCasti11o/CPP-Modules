/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 12:22:21 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/08/11 17:30:06 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int					m_numberValue;
		static const int	m_fractBits;
	public:
		Fixed();
		Fixed(const int value);
		Fixed(const float valuef);
		Fixed(const Fixed& value_copy);
		~Fixed();
		int				getRawBits( void ) const;
		void			setRawBits( int const raw );
		float			toFloat( void ) const;
		int				toInt( void ) const;
		Fixed&			operator=(const Fixed& other);

		// Comparison.
		bool			operator<(const Fixed& other);
		bool			operator>(const Fixed& other);
		bool			operator==(const Fixed& other);
		bool			operator<=(const Fixed& other);
		bool			operator>=(const Fixed& other);
		bool			operator!=(const Fixed& other);

		// Arithmetic
		Fixed			operator+(const Fixed& other);
		Fixed			operator-(const Fixed& other);
		Fixed			operator*(const Fixed& other);
		Fixed			operator/(const Fixed& other);

		// Increment / Decrement
		Fixed			operator++(void);
		Fixed			operator++(int value);
		Fixed			operator--(void);
		Fixed			operator--(int value);

		// Min && Max
		static const Fixed&			min(const Fixed &a, const Fixed &b);
		static Fixed&					min(Fixed &a, Fixed &b);
		static const Fixed&			max(const Fixed &a, const Fixed &b);
		static Fixed&					max(Fixed &a, Fixed &b);
	};
	std::ostream&	operator<<(std::ostream& os, const Fixed& ref);

#endif
