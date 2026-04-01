#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << RED << "Usage: ./convert <literal>" << RESET << std::endl;
		return (1);
	}
	std::cout << GREEN;
	ScalarConverter::convert(argv[1]);
	std::cout << RESET;
	return (0);
}
