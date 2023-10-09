/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:13:54 by yokitaga          #+#    #+#             */
/*   Updated: 2023/10/09 17:37:23 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.hpp"

static void	print_field(const std::string field)
{
	if (field.length() > 10)
		std::cout << field.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << std::setfill(' ') << field;
}

void	Contact::Summary() const
{
	std::cout << std::setw(10) << std::setfill(' ') << index;
	std::cout << "|";
	print_field(first_name);
	std::cout << "|";
	print_field(last_name);
	std::cout << "|";
	print_field(nickname);
	std::cout << std::endl;
}

void	Contact::Print() const
{
	std::cout << "first name: " << first_name << std::endl;
	std::cout << "last name: " << last_name << std::endl;
	std::cout << "nickname: " << nickname << std::endl;
	std::cout << "phone number: " << phone_number << std::endl;
	std::cout << "darkest secret: " << darkest_secret << std::endl;
}
