/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 00:24:06 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/07/17 21:26:19 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>

class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nick_name;
		std::string phone_number;
		std::string dark_secret;
	public:
	Contact();
	~Contact();

	// Setters
	void	set_firstname(std::string str);
	void	set_lastname(std::string str);
	void	set_nickname(std::string str);
	void	set_phone_number(std::string str);
	void	set_dark_secret(std::string str);

	// Getters
	std::string	get_firstname(void) const;
	std::string	get_lastname(void) const;
	std::string	get_nickname(void) const;
	std::string	get_phone_number(void) const;
	std::string	get_dark_secret(void) const;
};

#endif
