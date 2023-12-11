/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:13:54 by yokitaga          #+#    #+#             */
/*   Updated: 2023/12/12 00:19:22 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

void	Contact::initForAddContact(void)
{
	std::cin.ignore();
	std::cout << "Please enter the first name." << std::endl;
	std::cout << "> ";
	std::cin >> first_name;
	std::cout << "Please enter the last name." << std::endl;
	std::cout << "> ";
	std::cin >> last_name;
	std::cout << "Please enter the nickname." << std::endl;
	std::cout << "> ";
	std::cin >> nickname;
	std::cout << "Please enter the phone number." << std::endl;
	std::cout << "> ";
	std::cin >> phone_number;
	std::cout << "> ";
	std::cout << "Please enter the darkest secret." << std::endl;
	std::cout << "> ";
	std::cin >> darkest_secret;
	std::cout << std::endl;
}

void   Contact::setIndexForAdd(int index)
{
	this->index = index;
}

void	Contact::display()const
{
	if (this->first_name.empty() || this->last_name.empty() || this->nickname.empty())
		return ;
	std::cout << "Contact[" << index  << "]" << std::endl;
	std::cout << "> ";
	if (first_name.length() > 10)
		std::cout << "First Name:" << first_name.substr(0, 9) << ".|";
	else
		std::cout << "First Name:" << std::setw(10) << first_name << "|";
	if (last_name.length() > 10)
		std::cout << "Last Name:" << last_name.substr(0, 9) << ".|";
	else
		std::cout << "Last Name:" << std::setw(10) << last_name << "|";
	if (nickname.length() > 10)
		std::cout << "Nickname:" << nickname.substr(0, 9) << ".|";
	else
		std::cout << "Nickname:" << std::setw(10) << nickname << "|";
	std::cout << std::endl;
}



