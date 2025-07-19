/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 12:46:22 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/07/17 21:33:39 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <string>
# include <unistd.h>

enum field_type
	{
		FIRST_NAME,
		LAST_NAME,
		NICK_NAME,
		PHONE_NUMBER,
		DARK_SECRET
	};

class Phonebook
{
private:
	Contact	_contact[8];
	int		_index;
	int		_total;
public:
	Phonebook();
	~Phonebook();

	std::string	fix_length(std::string str, unsigned long max);
	std::string	spaces(int lenght);
	void		cases(int field, std::string str);
	void		add_contact(void);
	void		search(void);
	int			table(Contact contact[8]);
	void		print(Contact contact);
	Contact		get_contact(int index);

};

#endif
