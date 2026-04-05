/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 16:24:22 by daniel-cast       #+#    #+#             */
/*   Updated: 2026/04/05 17:29:40 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Base.hpp"
# include <cstdlib>
# include <ctime>

int main()
{
	UPDATE_SEED;
	Base* base = generate();

	PRINT "-----------------------------" ENDL;
	PRINT "Pointer address: " << base ENDL;
	PRINT "-----------------------------" ENDL;
	identify(base);

	PRINT "-----------------------------" ENDL;
	PRINT "Reference (same address): " << static_cast<void*>(base) ENDL;
	PRINT "-----------------------------" ENDL;
	identify(*base);

	delete base;
	return (0);
}
