/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 19:06:44 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/08/06 20:08:32 by daniel-cast      ###   ########.fr       */
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
		std::ostream&	operator<<(const Fixed& ref);
		Fixed&			operator=(const Fixed& other);
		float			toFloat( void ) const;
		int				toInt( void ) const;
	};

#endif
