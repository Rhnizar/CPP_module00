/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 18:45:28 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/08/09 19:04:17 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctype.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	if (argc >= 2)
	{
		while (argv[i])
		{
			j = 0;
			while(argv[i][j])
				std::cout<<(char)toupper(argv[i][j++]);
			if (argv[i + 1])
				std::cout<< " ";
			i++;
		}
	}
	else
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return 0;
}