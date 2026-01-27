/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastil <dacastil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 17:56:19 by daniel-cast       #+#    #+#             */
/*   Updated: 2026/01/27 17:17:07 by dacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <cstdlib>
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
	AForm(const Form &other);
	AForm(const std::string name, const int gradeToSi, const int gradeToEx);
	virtual ~AForm();

	AForm&				operator=(const AForm& other);
	std::string			getName(void) const;
	int					getGradeToSign(void) const;
	int					getGradeToExecute(void) const;
	bool				stateSigned(void) const;

	void				beSigned(const Bureaucrat &b);
	virtual	void		execute(Bureaucrat const & executor) const;

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
