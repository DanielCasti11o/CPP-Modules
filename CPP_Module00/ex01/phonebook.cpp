/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 23:34:12 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/07/17 21:35:47 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "phonebook.hpp"

Phonebook::Phonebook(void)
{
	this->_index = 0;
	this->_total = 8;
	std::cout << "An empty phone book has been created for up to 8 users." << std::endl;
}

Phonebook::~Phonebook(void)
{
	std::cout << "The phone book has been destroyed." << std::endl;
}

void	Phonebook::cases(int field, std::string str)
{
	if (std::getline(std::cin, str) && str != "")
	{
		switch (field)
		{
			case FIRST_NAME:
			{
				this->_contact[this->_index % 8].set_firstname(str);
				break;
			}
			case LAST_NAME:
			{
				this->_contact[this->_index % 8].set_lastname(str);
				break;
			}
			case NICK_NAME:
			{
				this->_contact[this->_index % 8].set_nickname(str);
				break;
			}
			case PHONE_NUMBER:
			{
				this->_contact[this->_index % 8].set_phone_number(str);
				break;
			}
			case DARK_SECRET:
			{
				this->_contact[this->_index % 8].set_dark_secret(str);
				break;
			}
			default:
				break;
		}
		field++;
	}
}

void	Phonebook::add_contact(void)
{
	std::string	str;
	int			index;

	str="";
	index = 0;
	if (this->_index >= this->_total)
		std::cout << "Warning!: overwriting info about " << this->_contact[this->_index % 8].get_firstname() << std::endl;
	while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter your first name: " << std::endl;
		cases(index, str);
		std::cout << "Enter your last name: " << std::endl;
		cases(index, str);
		std::cout << "Enter your Nickname: " << std::endl;
		cases(index, str);
		std::cout << "Enter your phone number: " << std::endl;
		cases(index, str);
		std::cout << "Now tell me your darkest secret?" << std::endl;
		cases(index, str);
		break ;
	}
	this->_index++;
}

std::string	Phonebook::fix_length(std::string str, unsigned long max)
{
	if (str.size() > max)
	{
		str.resize(max);
		str[str.size() - 1] = '.';
	}
	return (str);
}

std::string Phonebook::spaces(int lenght)
{
	std::string	str;
	while (lenght)
	{
		str.append(" ");
		lenght--;
	}
	return (str);
}

// Usamos el char c para después imprimir el index, despues tenemos la funcion spaces que me
// crea una string con espacios y la fix_lenght corta la longitud del string para que tenga la longitud permitida.

int	Phonebook::table(Contact contact[8])
{
	char		c;
	int			i;
	std::string	str;

	std::cout << "█████████████████████████████████████████████" << std::endl;
	std::cout << "█   index  █First Name█Last Name █Nick Name █" << std::endl;
	std::cout << "█████████████████████████████████████████████" << std::endl;
	c = '0';
	i = 0;
	while (c++ <= '8')
	{
		if (contact[c - 1 -'0'].get_firstname().size() && ++i)
		{
			str = c;
			str = fix_length(str, 10);
			std::cout << "█" << spaces(10 - str.size()) << str;
			str = fix_length(contact[c - 1 - '0'].get_firstname(), 10);
			std::cout << "█" << spaces(10 - str.size()) << str;
			str = fix_length(contact[c - 1 - '0'].get_lastname(), 10);
			std::cout << "█" << spaces(10 - str.size()) << str;
			str = fix_length(contact[c - 1 - '0'].get_nickname(), 10);
			std::cout << "█" << spaces(10 - str.size()) << str;
			std::cout << "█" << std::endl;
		}
	}
	std::cout << "█████████████████████████████████████████████" << std::endl;
	return (i);
}

void	Phonebook::print(Contact contact)
{
	std::cout << "requesting contact information." << std::endl;
	sleep(0.5);
	std::cout << "\033[A\33[2K";
	sleep(0.5);
	std::cout << "requesting contact information.." << std::endl;
	sleep(0.5);
	std::cout << "\033[A\33[2K";
	sleep(0.5);
	std::cout << "requesting contact information..." << std::endl;
	sleep(0.5);
	if (!contact.get_firstname().size())
	{
		std::cout << "Failed to get info!" << std::endl;
		return ;
	}
	std::cout << "█ First name     █ -> " << contact.get_firstname() << std::endl;
	std::cout << "█ Last name      █ -> " << contact.get_lastname() << std::endl;
	std::cout << "█ Nick name      █ -> " << contact.get_nickname() << std::endl;
	std::cout << "█ Phone number   █ -> " << contact.get_phone_number() << std::endl;
	std::cout << "█ Darkest secret █ -> " << contact.get_dark_secret() << std::endl;
}

void	Phonebook::search(void)
{
	std::string	str;

	if (!table(this->_contact))
	{
		std::cout << "The Phonebook is empty!" << std::endl;
		return ;
	}
	while (!std::cin.eof())
	{
		if (std::getline(std::cin, str) && str != "")
		{
			std::cout << "Select a valid index:" << std::endl;
			if (str.size() == 1 && str[0] >= '1' && str[0] <= '8' && \
				this->_contact[str[0] - 1 - '0'].get_firstname().size())
				break ;
			if (str != "")
				std::cout << "Invalid index!" << std::endl;
		}
	}
	if (!std::cin.eof())
		this->print(this->_contact[str[0] - 1 - '0']);
}
