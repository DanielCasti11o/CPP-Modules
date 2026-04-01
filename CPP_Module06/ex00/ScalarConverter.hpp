/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastil <dacastil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 19:23:24 by daniel-cast       #+#    #+#             */
/*   Updated: 2026/04/01 20:38:04 by dacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# define RED "\033[31m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define RESET "\033[0m"

# include <iostream>
# include <string>
# include <limits>
# include <cstdlib>
# include <cmath>
# include <iomanip>

// The best thing about using <static casts> is that in order to perform casts,
// they must be of well-defined types, avoiding dangerous data loss. ----> Warning with pointers (*)

// And C improves its way of searching in the code where we perform the casting ----> SEARCH WORD (static_cast).

// It's basically separating the casting types to protect. <static> <const>...

class ScalarConverter // Utily class --> No instantiable.
{
private:
	// Constructor and destructor in privates methods
	ScalarConverter();
	ScalarConverter(const ScalarConverter &other);
	ScalarConverter(const std::string &input);
	ScalarConverter &operator=(const ScalarConverter &other);
	~ScalarConverter();

public:
	static bool isLiteral(const std::string &input);
	static bool isChar(const std::string &input);
	static bool isInt(const std::string &input);
	static bool isFloat(const std::string &input);
	static bool isDouble(const std::string &input);

	static void convert(const std::string &input);
};



#endif
