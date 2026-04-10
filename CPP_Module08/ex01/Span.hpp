/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 18:00:37 by daniel-cast       #+#    #+#             */
/*   Updated: 2026/04/10 23:12:43 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <algorithm>
# include <stdexcept>
# include <iostream>

class Span
{
private:
	std::vector<int>	numbers;
	unsigned int		maxSize;

public:
	Span(unsigned int N);
	~Span();

	void addNumber(int number);
	int shortestSpan();
	int longestSpan();

};




# endif
