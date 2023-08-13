/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 19:05:48 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/08/13 10:26:40 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK
#define PHONEBOOK

#include "Contact.hpp"
#include <iostream>
#include <string.h>
#include <iomanip>

class PhoneBook {
	private:
	static const int arraysize = 3;
	Contact	contacts[arraysize];
	int		num_contact;
	public:
	PhoneBook();// constractor to initialize num_contact
	void	add_contact(Contact contact);
	void	print_contacts(Contact contact);
	int		search_contact();
	void	print_one_contact(int i);
};

#endif