/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 17:19:47 by daniel-cast       #+#    #+#             */
/*   Updated: 2026/02/21 16:12:06 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

# define RED "\033[31m"
# define RESET "\033[0m"

class PresidentialPardonForm : public AForm
{
private:
	std::string	m_target;
public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string m_target);
	PresidentialPardonForm(const PresidentialPardonForm &other);

	PresidentialPardonForm	&operator=(const PresidentialPardonForm &other);
	void	execute(Bureaucrat const &other) const;
	~PresidentialPardonForm();
};


