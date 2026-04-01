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

// nan;  --> NaN (indeterminado)
// nanf; --> NaN (float)
// +inf; -->  +∞
// -inf; -->  -∞
// +inff -->  +∞ (float)
// -inff -->  -∞ (float)

bool ScalarConverter::isLiteral(const std::string &input)
{
	if (input == "nan" || input == "nanf" ||
			input == "+inf" || input == "-inf" ||
			input == "+inff" || input == "-inff")
		return (true);
	else
		return (false);
}

bool ScalarConverter::isChar(const std::string &input)
{
	if (input.length() == 1 && std::isprint(input[0]) && !std::isdigit(input[0]))
		return (true);
	else
		return (false);
}

bool ScalarConverter::isInt(const std::string &input)
{
	size_t	i = 0;

	if (input.empty())
		return (false);
	if (input[i] == '-' || input[i] == '+')
		i++;
	if (i == input.length())
		return (false);
	while (i < input.length())
	{
		if (!std::isdigit(input[i]))
			return (false);
		i++;
	}
	long val = std::atol(input.c_str());
	if (val > std::numeric_limits<int>::max() || val < std::numeric_limits<int>::min())
		return (false);
	return (true);
}

bool ScalarConverter::isFloat(const std::string &input)
{
	if (input == "nanf" || input == "+inff" || input == "-inff")
		return (true);
	if (input[input.length() - 1] != 'f')
		return (false);
	std::string num = input.substr(0, input.length() - 1);
	if (num.empty())
		return (false);
	size_t i = 0;
	if (num[i] == '-' || num[i] == '+')
		i++;
	size_t dotPos = num.find('.');
	if (dotPos == std::string::npos)
	{
		while (i < num.length())
		{
			if (!std::isdigit(num[i]))
				return (false);
			i++;
		}
	}
	else
	{
		size_t j = i;
		while (j < dotPos)
		{
			if (!std::isdigit(num[j]))
				return (false);
			j++;
		}
		j = dotPos + 1;
		while (j < num.length())
		{
			if (!std::isdigit(num[j]))
				return (false);
			j++;
		}
	}
	return (true);
}

bool ScalarConverter::isDouble(const std::string &input)
{
	if (input == "nan" || input == "+inf" || input == "-inf")
		return (true);
	if (input.empty())
		return (false);
	size_t i = 0;
	if (input[i] == '-' || input[i] == '+')
		i++;
	size_t dotPos = input.find('.');
	if (dotPos == std::string::npos)
	{
		while (i < input.length())
		{
			if (!std::isdigit(input[i]))
				return (false);
			i++;
		}
	}
	else
	{
		size_t j = i;
		while (j < dotPos)
		{
			if (!std::isdigit(input[j]))
				return (false);
			j++;
		}
		j = dotPos + 1;
		while (j < input.length())
		{
			if (!std::isdigit(input[j]))
				return (false);
			j++;
		}
	}
	return (true);
}

void ScalarConverter::convert(const std::string &input)
{
	char	c;
	int		i;
	float	f;
	double	d;

	if (isLiteral(input))
	{
		if (input == "nan" || input == "nanf")
		{
			d = NAN;
			f = static_cast<float>(NAN);
		}
		else if (input == "+inf" || input == "+inff")
		{
			d = std::numeric_limits<double>::infinity();
			f = std::numeric_limits<float>::infinity();
		}
		else if (input == "-inf" || input == "-inff")
		{
			d = -std::numeric_limits<double>::infinity();
			f = -std::numeric_limits<float>::infinity();
		}
		i = static_cast<int>(d);
		c = static_cast<char>(d);
		std::cout << "char:" << YELLOW << " impossible" << GREEN << std::endl;
		std::cout << "int:" << YELLOW << " impossible" << GREEN << std::endl;
		std::cout << "float: " << f << "f" << std::endl;
		std::cout << "double: " << d << std::endl;
		return;
	}

	if (isFloat(input))
	{
		std::string num = input.substr(0, input.length() - 1);
		f = std::atof(num.c_str());
		c = static_cast<char>(f);
		i = static_cast<int>(f);
		d = static_cast<double>(f);
	}
	else if (isDouble(input))
	{
		d = std::atof(input.c_str());
		c = static_cast<char>(d);
		i = static_cast<int>(d);
		f = static_cast<float>(d);
	}
	else if (isInt(input))
	{
		i = std::atoi(input.c_str());
		c = static_cast<char>(i);
		f = static_cast<float>(i);
		d = static_cast<double>(i);
	}
	else if (isChar(input))
	{
		c = input[0];
		i = static_cast<int>(c);
		f = static_cast<float>(c);
		d = static_cast<double>(c);
	}
	else
	{
		std::cout << "char:" << YELLOW << " impossible" << GREEN << std::endl;
		std::cout << "int:" << YELLOW << " impossible" << GREEN << std::endl;
		std::cout << "float:" << YELLOW << " impossible" << GREEN << std::endl;
		std::cout << "double:" << YELLOW << " impossible" << GREEN << std::endl;
		return;
	}

	std::cout << "char: ";
	if (c >= 32 && c <= 126)
		std::cout << "'" << c << "'" << std::endl;
	else
		std::cout << YELLOW << "Non displayable" << GREEN << std::endl;

	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
}
