/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 10:45:43 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/08/13 13:36:13 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <strstream>

class Contact
{
private:
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;
public:
	/*constractor to initialize the contact properties*/
	// Contact(std::string fn, std::string ln, std::string nn, std::string pn, std::string ds)
	// {
	// 	first_name = fn;
	// 	last_name = ln;
	// 	nickname = nn;
	// 	phone_number = pn;
	// 	darkest_secret = ds;
	// }
	
	/*----------------------------------------------------------------------*/
	std::string getFirstname(){return first_name;}//Getter for first name
	void setFirstname(std::string fn){first_name = fn;}//Setter for first name

	std::string getLastname(){return last_name;}//Getter for last name
	void setLastname(std::string ln){last_name = ln;}//Setter for last name

	std::string getNickname(){return nickname;}//Getter for nickname
	void setNickname(std::string nname){nickname = nname;}//Setter for nickname

	std::string	getPhonenumber(){return phone_number;}//Getter for phone number
	void setPhonenumber(std::string phnu){phone_number = phnu;}//Setter for phone number

	std::string	getDarkestSecret(){return darkest_secret;}//Getter for darkest secret
	void setDarkestSecret(std::string ds){darkest_secret = ds;}//Setter for darkest secret
	/*----------------------------------------------------------------------*/
};
#endif