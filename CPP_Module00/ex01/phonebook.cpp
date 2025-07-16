/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 23:34:12 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/07/16 14:30:10 by daniel-cast      ###   ########.fr       */
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

void	Phonebook::id_case(int field)
{
	switch (field)
	{
	case FIRST_NAME:
		/* code */
		break;
	case LAST_NAME:

	case NICK_NAME:

	case PHONE_NUMBER:

	case DARK_SECRET:
	default:
		break;
	}

}

void	Phonebook::add_contact(void)
{
	std::string	str;

	str="";
	if (this->_index >= this->_total)
		std::cout << "Warning!: overwriting info about " << this->_contact[this->_index % 8].get_firstname() << std::endl;
	while (!std::cin.eof() && str == "")
	{
		id_case();
	}

}
