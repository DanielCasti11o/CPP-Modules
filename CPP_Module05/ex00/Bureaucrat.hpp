/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 12:35:02 by daniel-cast       #+#    #+#             */
/*   Updated: 2026/01/20 16:08:13 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <cstdlib>
# include <iostream>

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

	Bureaucrat&	operator=(const Bureaucrat& other);
	std::string	GetName(void) const;
	int			GetGrade(void) const;

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
