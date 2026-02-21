/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 17:21:33 by daniel-cast       #+#    #+#             */
/*   Updated: 2026/02/21 13:59:41 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

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
	void	beExecuted(Bureaucrat const &executor)const;
};
