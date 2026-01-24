/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastil <dacastil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 17:56:19 by daniel-cast       #+#    #+#             */
/*   Updated: 2026/01/24 15:04:32 by dacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <cstdlib>
# include "Bureaucrat.hpp"

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
	std::string	getName(void) const;
	int			getGradeToSign(void) const;
	int			getGradeToExecute(void) const;
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

std::ostream	&operator<<(std::ostream &str, const Form &f);

#endif
