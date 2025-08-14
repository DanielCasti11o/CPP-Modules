/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 13:55:07 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/07/29 17:50:17 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstdlib>

bool	word_exists(std::string buffer, char *word)
{
	size_t	pos;

	for (size_t i = 0; i < buffer.size(); i++)
	{
		pos = buffer.find(word, i);
		if (i == pos)
			return (true);
	}
	return (false);
}

std::string	replace_word(bool flag, std::string content, char *word1, char *word2)
{
	std::ostringstream	buff;
	size_t				pos;
	std::string			wd2 = word2;
	std::string			wd1 = word1;

	if (flag)
	{
		for (size_t i = 0; i < content.size(); i++)
		{
			pos = content.find(word1, i);
			if (i == pos && wd2.size() && wd1.size())
			{
				buff << wd2;
				i += wd1.size() - 1;
			}
			else
				buff << content[i];
		}
		return (buff.str());
	}
	else
		return (content);

}

void	ft_replace(char **argv)
{
	std::string				add;
	std::string				arg;
	std::ostringstream		buffer;
	std::string				content;
	std::string				dest;
	bool					exist_word;

	std::ifstream	infile(argv[1]);
	if (!infile.is_open()) {
		std::cerr << "Open failed!" << std::endl; exit(0);
	}
	buffer << infile.rdbuf(); // I read everything and put it in the buffer
	exist_word = word_exists(buffer.str(), argv[2]); // return a boolean to see if word 1 exists
	content = buffer.str(); // convert to string
	infile.close();
	buffer.str(""); buffer.clear(); // I clear the buffer for later use.
	add = ".replace";
	arg = argv[1] + add;
	std::ofstream outfile(arg.c_str());
	if (!outfile) {
		std::cerr << "The file created is failed!" << std::endl; exit(0);
	}
	dest = replace_word(exist_word, content, argv[2], argv[3]);
	outfile << dest;
	outfile.close();
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Invalid args!" << std::endl;
		return (0);
	}
	ft_replace(argv);
	return (0);
}
