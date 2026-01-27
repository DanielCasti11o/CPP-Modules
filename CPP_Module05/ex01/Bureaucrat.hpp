/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastil <dacastil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 12:35:02 by daniel-cast       #+#    #+#             */
/*   Updated: 2026/01/27 16:34:32 by dacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <cstdlib>
# include <iostream>

class Form;

class Bureaucrat
{
private:
	const	std::string name;
	int		grade;
public:
	Bureaucrat();
	Bureaucrat(const Bureaucrat &other);
	Bureaucrat(std::string, int grade);
	virtual ~Bureaucrat();

	const Bureaucrat&	operator=(const Bureaucrat& other);
	std::string			GetName(void) const;
	int					GetGrade(void) const;
	void				signForm(Form &f);

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

	void	incrementGrade(void);
	void	decrementGrade(void);
};

std::ostream	&operator<<(std::ostream &str, Bureaucrat const &b);

#endif
