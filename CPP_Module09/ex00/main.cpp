/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 18:40:52 by daniel-cast       #+#    #+#             */
/*   Updated: 2026/05/10 13:40:53 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "BitcoinExchange.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Error: wrong number of arguments." << std::endl;
		std::cerr << "Usage: ./btc <input_file>" << std::endl;
		return (1);
	}
	BitcoinExchange	btc;

	if (!btc.loadDatabase("data.csv"))
		return (1);
	if (!btc.processInput(argv[1]))
		return (1);

	return (0);
}
