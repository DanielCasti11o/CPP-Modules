/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 12:46:22 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/07/16 14:29:24 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <string>

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

	void	Phonebook::id_case(int field);
	void	add_contact(void);
	void	search(void);
	void	print(Contact contact);
	Contact	get_contact(int index);

};

#endif
