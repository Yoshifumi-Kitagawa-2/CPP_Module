/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 20:32:39 by yokitaga          #+#    #+#             */
/*   Updated: 2023/10/09 19:49:07 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
#include "PhoneBook.hpp"

void PhoneBook::Add()
{
	Contact contact(index);

	std::cout << "first name?: ";
	if(!(std::getline(std::cin, contact.first_name)))
		return ;
	std::cout << "last name?: ";
	if(!(std::getline(std::cin, contact.last_name)))
		return ;
	std::cout << "nickname?: ";
	if(!(std::getline(std::cin, contact.nickname)))
		return ;
	std::cout << "phone number?: ";
	if(!(std::getline(std::cin, contact.phone_number)))
		return ;
	std::cout << "darkest secret?: ";
	if(!(std::getline(std::cin, contact.darkest_secret)))
		return ;
	contacts[(index++) % MAX_CONTACTS] = contact;
	std::cout << "Contact added." << std::endl;
}

