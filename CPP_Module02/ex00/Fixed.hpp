/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 18:38:13 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/08/06 18:36:18 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int					m_numberValue;
		static const int	m_fractBits;
	public:
		Fixed();
		Fixed(Fixed& value_copy);
		~Fixed();
		Fixed&	operator=(Fixed& other);
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
};

#endif
