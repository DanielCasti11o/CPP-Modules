/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 13:45:45 by daniel-cast       #+#    #+#             */
/*   Updated: 2026/05/10 13:56:22 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <string>
# include <cstdlib>
# include <sstream>
# include <iostream>
# include <stack>

// reverse Polish notation. LIFO (Last In, First Out)

class RPN
{
	private:
		std::stack<int>	stack;
	public:
		RPN();
		RPN(const RPN &other);
		RPN &operator=(const RPN &other);
		~RPN();

		bool	calculate(std::string expressions);
};

#endif
