/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 19:37:11 by daniel-cast       #+#    #+#             */
/*   Updated: 2026/03/28 15:43:27 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::~ScalarConverter()
{
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other)
{
	(void)other;
	return (*this);
}

ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
	(void)other;
}

ScalarConverter::ScalarConverter(const std::string &input)
{
	(void)input;
}

// literals.

// nan / nanf (Not a Number): * Meaning: It represents an "undefined" or "unrepresentable" value.
//
// Examples: 0.0/0.0, −1​, or inf−inf.
//
// Behavior: Any operation with nan usually results in nan. It is not equal to anything, not even itself (nan=nan).
//
// inf / inff (Infinity):
//
// Meaning: It represents a value that exceeds the maximum limit of a floating-point number (overflow).
//
// Types: You have Positive Infinity (+inf) and Negative Infinity (-inf).
//
// Examples: 1.0/0.0 or 1.79e308∗2.

bool ScalarConverter::isLiteral(const std::string &input)
{
	return (input == "nan" || input == "nanf" || input == "+inf" || input == "-inf" || input == "+inff" || input == "-inff");
}

bool ScalarConverter::isChar(const std::string &input)
{
	return (input.length() == 1 && std::isprint(input[0]) && !std::isdigit(input[0]));
}

bool ScalarConverter::isInt(const std::string &input)
{
	size_t	i = 0;

	if (input[i] == '-' || input[i] == '+')
		i++;
	while (i < input.length())
	{
		if (!std::isdigit(input[i]))
			return (false);
		i++;
	}
	if (std::atol(input.c_str()) > std::numeric_limits<int>::max()
		|| std::atol(input.c_str()) < std::numeric_limits<int>::min()) // Check for overflow and underflow.
		return (false);
	return (true);
}

void ScalarConverter::convert(const std::string &input)
{
	char	c;
	int		i;
	float	f;
	double	d;

	if (std::isalnum(input))
	{
	}

}
