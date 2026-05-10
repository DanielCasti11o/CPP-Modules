/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 13:47:41 by daniel-cast       #+#    #+#             */
/*   Updated: 2026/05/10 14:11:28 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RPN.hpp"

RPN::RPN()
{
}

RPN::~RPN()
{
}

RPN::RPN(const RPN &other) : stack(other.stack)
{
}
RPN	&RPN::operator=(const RPN &other)
{
	if (this != &other)
	{
		this->stack = other.stack;
	}
	return (*this);
}

bool	RPN::calculate(std::string expression)
{
	std::istringstream	ss(expression);
	std::string			token;

	while (ss >> token)
	{
		if (token.length() == 1 && std::isdigit(token[0]))
		{
			stack.push(token[0] - '0');
		}
		else if (token == "+" || token == "-" || token == "*" || token == "/")
		{
			if (stack.size() < 2)
			{
				std::cerr << "Error: insufficient operands" << std::endl;
				return false;
			}
			int b = stack.top();
			stack.pop();
			int a = stack.top();
			stack.pop();
			if (token == "+")
				stack.push(a + b);
			else if (token == "-")
				stack.push(a - b);
			else if (token == "*")
				stack.push(a * b);
			else if (token == "/")
			{
				if (b == 0)
				{
					std::cerr << "Error: division by zero is impossible" << std::endl;
					return false;
				}
				stack.push(a / b);
			}
		}
		else
		{
			std::cerr << "Error: invalid token" << std::endl;
			return false;
		}
	}
	if (stack.size() != 1)
	{
		std::cerr << "Error: invalid expression" << std::endl;
		return false;
	}
	std::cout << stack.top() << std::endl;
	return true;
}
