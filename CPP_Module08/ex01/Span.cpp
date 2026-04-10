/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 18:08:26 by daniel-cast       #+#    #+#             */
/*   Updated: 2026/04/10 23:21:04 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"

Span::Span(unsigned int N) : maxSize(N)
{
}

Span::~Span()
{
}

void	Span::addNumber(int number)
{
	if (this->numbers.size() >= this->maxSize)
		throw std::out_of_range("Span is full");
	else
		numbers.push_back(number);
}

int Span::longestSpan()
{
	if (numbers.size() < 2)
		throw std::exception();
	int min = *std::min_element(numbers.begin(), numbers.end());
	int max = *std::max_element(numbers.begin(), numbers.end());
	return (max - min);
}

int Span::shortestSpan()
{
	if (numbers.size() < 2)
		throw std::exception();
	std::vector<int> sorted(numbers);
	std::sort(sorted.begin(), sorted.end()); // ordeno el vector para calcular el span mínimo
	int minSpan = sorted[1] - sorted[0];
	for (size_t i = 2; i < sorted.size(); ++i)
	{
		int span = sorted[i] - sorted[i - 1]; // calculo el span entre elementos consecutivos
		if (span < minSpan)
			minSpan = span;
	}
	return (minSpan);
}
