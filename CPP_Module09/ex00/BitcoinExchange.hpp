/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 18:41:02 by daniel-cast       #+#    #+#             */
/*   Updated: 2026/04/27 00:00:00 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <sstream>
# include <string>
# include <map>
# include <utility>
# include <cstdlib>
# include <cctype>

class BitcoinExchange
{
	private:
		std::map<std::string, float>	bitcoinDB; // Key(fecha YYYY-MM-DD), Value(price bitcoin FLOAT)

		bool	isValidDate(const std::string &date);
		bool	isValidValue(const std::string &valueStr, float &value);
		float	findExchangeRate(const std::string &date);
		bool	parseLine(const std::string &line, std::string &date, std::string &valueStr);

	public:
		BitcoinExchange(void);
		BitcoinExchange(const BitcoinExchange &other);
		BitcoinExchange	&operator=(const BitcoinExchange &other);
		~BitcoinExchange(void);

		bool	loadDatabase(const std::string &filename);
		bool	processInput(const std::string &filename);

};

#endif
