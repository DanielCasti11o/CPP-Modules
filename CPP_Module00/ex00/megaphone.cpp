/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastil <dacastil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 18:07:06 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/07/19 14:15:30 by dacastil         ###   ########.fr       */
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
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
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
