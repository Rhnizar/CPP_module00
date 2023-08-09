/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 19:05:48 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/08/09 20:18:28 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK
#define PHONEBOOK

#include <iostream>

class phonebook {
	public:
	long int	Num;
	std::string	Name;
	phonebook(long int num, std::string name)
	{
		Num = num;
		Name = name;
	}
	void	get_info()
	{
		std::cout <<Num << std::endl;
		std::cout <<Name << std::endl;
	}
};
#endif