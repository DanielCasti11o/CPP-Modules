/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 19:23:24 by daniel-cast       #+#    #+#             */
/*   Updated: 2026/03/25 20:10:16 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <limits>
# include <cstdlib>
# include <cmath>
# include <iomanip>

class ScalarConverter
{
private:
	ScalarConverter();
	ScalarConverter(const ScalarConverter &other);
	ScalarConverter(const std::string &input);
	ScalarConverter &operator=(const ScalarConverter &other);
	~ScalarConverter();

public:
	bool isLiteral(const std::string &input);
	bool isChar(const std::string &input);
	bool isInt(const std::string &input);
	bool isFloat(const std::string &input);
	bool isDouble(const std::string &input);
	static void convert(const std::string &input);
};



#endif
