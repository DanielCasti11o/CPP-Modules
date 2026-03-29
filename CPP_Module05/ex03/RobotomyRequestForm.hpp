/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 17:21:33 by daniel-cast       #+#    #+#             */
/*   Updated: 2026/03/29 14:21:21 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
# include <ctime>

class RobotomyRequestForm : public AForm
{
private:
	std::string m_target;
public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string m_target);
	RobotomyRequestForm(const RobotomyRequestForm &other);
	~RobotomyRequestForm();

	RobotomyRequestForm &operator=(const RobotomyRequestForm &other);
	void	execute(Bureaucrat const &executor)const;
};
