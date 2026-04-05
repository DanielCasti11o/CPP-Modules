/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 16:27:16 by daniel-cast       #+#    #+#             */
/*   Updated: 2026/04/05 17:28:24 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Base.hpp"

Base::~Base()
{
}

Base* generate()
{
	int random = std::rand() % 3; // Generate a random number between 0 and 2
	switch (random)
	{
		case 0:
			std::cout << "Generated instance of A" << std::endl;
			return new A();
		case 1:
			std::cout << "Generated instance of B" << std::endl;
			return new B();
		case 2:
			std::cout << "Generated instance of C" << std::endl;
			return new C();
		default:
			return NULL; // This should never happen
	}
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		PRINT "Identified type: A" ENDL <<  "----> " << dynamic_cast<A*>(p) ENDL;
	else if (dynamic_cast<B*>(p))
		PRINT "Identified type: B" ENDL <<  "----> " << dynamic_cast<B*>(p) ENDL;
	else if (dynamic_cast<C*>(p))
		PRINT "Identified type: C" ENDL <<  "----> " << dynamic_cast<C*>(p) ENDL;
	else
		PRINT "Unknown type" ENDL;
}

void identify(Base& p)
{
	if (dynamic_cast<A*>(&p))
		PRINT "Identified type: A" ENDL <<  "----> " << dynamic_cast<A*>(&p) ENDL;
	else if (dynamic_cast<B*>(&p))
		PRINT "Identified type: B" ENDL <<  "----> " << dynamic_cast<B*>(&p) ENDL;
	else if (dynamic_cast<C*>(&p))
		PRINT "Identified type: C" ENDL <<  "----> " << dynamic_cast<C*>(&p) ENDL;
	else
		PRINT "Unknown type" ENDL;
}
