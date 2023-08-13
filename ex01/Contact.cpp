/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 10:47:11 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/08/13 13:56:08 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	num_contact = 0;
}

void	PhoneBook::add_contact(Contact contact)
{
	int	 i  = 0;
	if (num_contact < 3)
	{
		contacts[num_contact] = contact;
		num_contact++;
	}
	else
	{
		while (i < 2)
		{
			contacts[i] = contacts[i + 1];
			i++;
		}
		contacts[i] = contact;
	}
}

std::string	exact_string(std::string str)
{
	std::string sub;

	if (str.length() >= 10)
	{
		sub = str.substr(0, 9) + ".";
		return (sub);
	}
	else
		return (str);
}

void	PhoneBook::print_one_contact(int i)
{
	std::cout << std::setw(10) << i + 1<< "|";
	std::cout << std::setw(10) << exact_string(contacts[i].getFirstname()) << "|";
	std::cout << std::setw(10) << exact_string(contacts[i].getLastname()) << "|";
	std::cout << std::setw(10) << exact_string(contacts[i].getNickname()) << "|";
	std::cout << std::endl;
}

void	PhoneBook::print_contacts(Contact contact)
{
	int i = 0;
	std::cout << std::setw(10) << "Index" << "|" << std::setw(10) << "First Name" << "|" <<
	std::setw(10) << "Last Name" << "|" <<  std::setw(10) << "Nickname" << "|" << std::endl;
	std::cout << "--------------------------------------------------" << std::endl;
	while (i < num_contact)
	{
		print_one_contact(i);
		i++;
	}
}

int	PhoneBook::search_contact()
{
	int	index;
	int	i = 1;
	std::string		input_line;
	std::strstream	s;

	std::cout <<"enter the contact index to search : ";
	if (!std::getline(std::cin, input_line))
		return 10;
	s << input_line;
	s >> index;
	while (i <= num_contact)
	{
		if (i == index)
		{
			print_one_contact(i - 1);
			break;
		}
		i++;
	}
	if (i != index || i > num_contact)
		std::cout << "invalid index !";
	return 0;
}
