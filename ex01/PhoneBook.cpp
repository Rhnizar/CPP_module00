/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 19:05:32 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/08/13 11:00:25 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
	
int	fill_info_contact(Contact &contact)
{
	std::string inputline;
	std::cout <<"enter first name : ";
	if (!std::getline(std::cin, inputline))
		return 10;
	if (inputline.length() == 0)
		return -1;
	contact.setFirstname(inputline);
	std::cout <<std::endl;

	std::cout <<"enter last name : ";
	if (!std::getline(std::cin, inputline))
		return 10;
	if (inputline.length() == 0)
		return -1;
	contact.setLastname(inputline);
	std::cout <<std::endl;
	
	std::cout <<"enter Nickname : ";
	if (!std::getline(std::cin, inputline))
		return 10;
	if (inputline.length() == 0)
		return -1;
	contact.setNickname(inputline);
	std::cout <<std::endl;

	std::cout <<"darkest secret : ";
	if (!std::getline(std::cin, inputline))
		return 10;
	if (inputline.length() == 0)
		return -1;
	contact.setDarkestSecret(inputline);
	std::cout <<std::endl;

	std::cout <<"enter Phonenumber : ";
	if (!std::getline(std::cin, inputline))
		return 10;
	if (inputline.length() == 0)
		return -1;
	contact.setPhonenumber(inputline);
	std::cout <<std::endl;
	return 0;
}




int	main()
{
	PhoneBook	myPhonebook;
	std::string	inputline;
	int	check_re;
	while(1)
	{
		std::cout <<"enter command (ADD or  SEARCH or  EXIT): ";
		if (!std::getline(std::cin, inputline))
			break ;
		Contact	newContact;
		if (inputline == "ADD")
		{
			check_re = fill_info_contact(newContact);
			if (check_re == 10)
				break ;
			if (check_re == -1)
				std::cout <<"failed to add contact try again !" <<std::endl;
			if (check_re == 0)
				myPhonebook.add_contact(newContact);
		}
		else if (inputline == "SEARCH")
		{
			myPhonebook.print_contacts(newContact);
			if (myPhonebook.search_contact() == 10)
				break;
			std::cout <<std::endl;
		}
		else if (inputline == "EXIT")
			break;
		else
			std::cout <<"invalid command try again !!!" <<std::endl;
		
	}
	return 0;
}
