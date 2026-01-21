/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 17:56:19 by daniel-cast       #+#    #+#             */
/*   Updated: 2026/01/21 15:58:45 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <cstdlib>

class Form
{
	private:
		const std::string	name;
		bool				isSigned;
		const int			gradeToSign;
		const int			gradeToExecute;

	public:

	Form();
	Form(const Form &other);
	Form(const std::string name, const int gradeToSi, const int gradeToEx);
	virtual ~Form();

	Form&				operator=(const Form& other);
	const std::string	getName(void);
	const int			getGradeToSign(void);
	const int			getGradeToExecute(void);
	bool				stateSigned(void);

		class GradeTooHighException: public std::exception
	{
		public:
			virtual char const	*what(void) const throw();
	};

	class GradeTooLowException: public std::exception
	{
		public:
			virtual char const	*what(void) const throw();
	};
};

std::ostream	&operator<<(std::ostream &str, Form const &f);

#endif
