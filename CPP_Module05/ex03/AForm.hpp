/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 17:56:19 by daniel-cast       #+#    #+#             */
/*   Updated: 2026/02/21 16:58:04 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <cstdlib>
# include <fstream>
# include "Bureaucrat.hpp"

class AForm
{
	private:
		const std::string	name;
		bool				isSigned;
		const int			gradeToSign;
		const int			gradeToExecute;

	public:

	AForm();
	AForm(const AForm &other);
	AForm(const std::string name, const int gradeToSi, const int gradeToEx);
	virtual ~AForm();

	AForm&				operator=(const AForm& other);
	std::string			getName(void) const;
	int					getGradeToSign(void) const;
	int					getGradeToExecute(void) const;
	bool				stateSigned(void) const;

	void				beSigned(const Bureaucrat &b);
	virtual	void		execute(Bureaucrat const & executor) const = 0;

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

	class FormNotSignedException: public std::exception
	{
		public:
		virtual char const	*what(void) const throw();
	};
};

std::ostream	&operator<<(std::ostream &str, const AForm &f);

#endif
