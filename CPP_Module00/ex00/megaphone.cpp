/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 18:07:06 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/07/14 18:36:28 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

// char	*to_upper(char *str)
// {
// 	int i;

// 	i = 0;
// 	while (str[i])
// 	{
// 		if (str[i] < 'z' && str[i] > 'a')
// 			str[i] -= 32;
// 		i++;
// 	}
// 	return (str);
// }

int main (int argc, char **argv)
{
	int	i, j;

	i = 1;
	j = 0;
	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
		return (0);
	}
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			argv[i][j] = (char)std::toupper(argv[i][j]);
			j++;
		}
		std::cout << argv[i];
		i++;
	}
	std::cout << std::endl;
	return (0);
}
