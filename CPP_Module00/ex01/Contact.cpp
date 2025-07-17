/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 12:45:50 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/07/17 15:20:12 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

// Builder and destroyer.

Contact::Contact(void)
{
}

Contact::~Contact(void)
{}

//SETTERS: Modify the value of the class attributes.

void	Contact::set_firstname(std::string str)
{
	this->first_name = str;
}

void	Contact::set_lastname(std::string str)
{
	this->last_name = str;
}

void	Contact::set_nickname(std::string str)
{
	this->nick_name = str;
}

void	Contact::set_phone_number(std::string str)
{
	this->phone_number = str;
}

void	Contact::set_dark_secret(std::string str)
{
	this->dark_secret = str;
}

// Getters: They obtain the value of the attribute. They don't modify it.

std::string	Contact::get_firstname(void) const
{
	return (this->first_name);
}

std::string	Contact::get_lastname(void) const
{
	return (this->last_name);
}

std::string	Contact::get_nickname(void) const
{
	return (this->nick_name);
}

std::string	Contact::get_phone_number(void) const
{
	return (this->phone_number);
}

std::string	Contact::get_dark_secret(void) const
{
	return (this->dark_secret);
}
