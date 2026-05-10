/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 00:00:00 by daniel-cast       #+#    #+#             */
/*   Updated: 2026/04/27 00:00:00 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void)
{
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other) : bitcoinDB(other.bitcoinDB)
{
}

BitcoinExchange::~BitcoinExchange(void)
{
}

BitcoinExchange	&BitcoinExchange::operator=(const BitcoinExchange &other)
{
	if (this != &other)
	{
		this->bitcoinDB = other.bitcoinDB;
	}
	return (*this);
}

 // Format CSV:
 // date,exchange_rate
 // 2011-01-03,0.3
 // 2011-01-09,0.32

bool	BitcoinExchange::loadDatabase(const std::string &filename)
{
	std::ifstream	file(filename.c_str());
	std::string		line;
	int				lineNum = 0;

	if (!file.is_open())
	{
		std::cerr << "Error: could not open database file." << std::endl;
		return (false);
	}
	while (std::getline(file, line))
	{
		lineNum++;

		if (lineNum == 1)
		{
			if (line != "date,exchange_rate")
			{
				std::cerr << "Error: invalid database header." << std::endl;
				file.close();
				return (false);
			}
			continue;
		}
		size_t	commaPos = line.find(',');
		if (commaPos == std::string::npos)
			continue;

		std::string	date = line.substr(0, commaPos);
		std::string	rateStr = line.substr(commaPos + 1);

		if (!isValidDate(date))
			continue;

		std::stringstream	ss(rateStr);
		float				rate;

		ss >> rate; // TO FLOAT
		if (ss.fail())
			continue;
		bitcoinDB[date] = rate;
	}
	file.close();
	if (bitcoinDB.empty())
	{
		std::cerr << "Error: database is empty." << std::endl;
		return (false);
	}
	return (true);
}

bool	BitcoinExchange::processInput(const std::string &filename)
{
	std::ifstream	file(filename.c_str());
	std::string		line;
	int				lineNum = 0;

	if (!file.is_open())
	{
		std::cerr << "Error: could not open file." << std::endl;
		return (false);
	}
	while (std::getline(file, line))
	{
		lineNum++;
		if (lineNum == 1)
		{
			size_t start = line.find_first_not_of(" \t\r");
			size_t end = line.find_last_not_of(" \t\r");
			std::string trimmed = "";
			if (start != std::string::npos && end != std::string::npos)
				trimmed = line.substr(start, end - start + 1);
			if (trimmed == "date | value")
				continue;
		}
		if (line.empty())
			continue;

		std::string	date;
		std::string	valueStr;

		if (!parseLine(line, date, valueStr))
		{
			std::cout << "Error: bad input => " << line << std::endl;
			continue;
		}
		if (!isValidDate(date))
		{
			std::cout << "Error: bad input => " << line << std::endl;
			continue;
		}
		float	value;
		if (!isValidValue(valueStr, value))
			continue;
		float	exchangeRate = findExchangeRate(date);
		if (exchangeRate < 0)
		{
			std::cout << "Error: no exchange rate found for " << date << std::endl;
			continue;
		}
		float	result = value * exchangeRate; // PRICE CALCULATE
		std::cout << date << " => " << valueStr << " = " << result << std::endl;
	}
	file.close();
	return (true);
}

bool	BitcoinExchange::isValidDate(const std::string &date)
{
	if (date.length() != 10)
		return (false);
	if (date[4] != '-' || date[7] != '-')
		return (false);
	for (int i = 0; i < 10; i++)
	{
		if (i == 4 || i == 7)
			continue;
		if (!std::isdigit(static_cast<unsigned char>(date[i])))
			return (false);
	}
	int	year = std::atoi(date.substr(0, 4).c_str());
	int	month = std::atoi(date.substr(5, 2).c_str());
	int	day = std::atoi(date.substr(8, 2).c_str());
	if (month < 1 || month > 12)
		return (false);
	int	daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	if (month == 2 && year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
		daysInMonth[1] = 29;
	if (day < 1 || day > daysInMonth[month - 1])
		return (false);
	return (true);
}

bool	BitcoinExchange::isValidValue(const std::string &valueStr, float &value)
{
	if (valueStr.empty())
	{
		std::cout << "Error: not a number." << std::endl;
		return (false);
	}
	std::stringstream	ss(valueStr);
	ss >> value;

	if (ss.fail())
	{
		std::cout << "Error: not a number." << std::endl;
		return (false);
	}
	std::string	remaining;

	ss >> remaining;
	if (!remaining.empty())
	{
		std::cout << "Error: not a number." << std::endl;
		return (false);
	}
	if (value <= 0)
	{
		std::cout << "Error: not a positive number." << std::endl;
		return (false);
	}
	if (value > 1000)
	{
		std::cout << "Error: too large a number." << std::endl;
		return (false);
	}
	return (true);
}

float	BitcoinExchange::findExchangeRate(const std::string &date)
{
	std::map<std::string, float>::iterator	it = bitcoinDB.lower_bound(date);

	if (it != bitcoinDB.end() && it->first == date)
		return (it->second);
	if (it != bitcoinDB.begin())
	{
		it--;
		return (it->second);
	}
	return (-1);
}


bool	BitcoinExchange::parseLine(const std::string &line, std::string &date, std::string &valueStr)
{
	size_t	separatorPos = line.find(" | ");
	if (separatorPos == std::string::npos)
		return (false);

	date = line.substr(0, separatorPos);

	valueStr = line.substr(separatorPos + 3); // " | "

	size_t	start = date.find_first_not_of(" \t");
	size_t	end = date.find_last_not_of(" \t");
	if (start != std::string::npos && end != std::string::npos)
		date = date.substr(start, end - start + 1);

	start = valueStr.find_first_not_of(" \t");
	end = valueStr.find_last_not_of(" \t");
	if (start != std::string::npos && end != std::string::npos)
		valueStr = valueStr.substr(start, end - start + 1);
	return (true);
}
