/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 20:32:39 by yokitaga          #+#    #+#             */
/*   Updated: 2024/01/06 17:52:03 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook():currentIndex(0){}//currentindexを0で初期化

PhoneBook::~PhoneBook(){}

void PhoneBook::add(void)
{
	if (currentIndex == MAX_CONTACTS)
		currentIndex = 0;
	contacts[currentIndex].initForAddContact();
	contacts[currentIndex].setIndexForAdd(currentIndex);
	currentIndex++;
}

int PhoneBook::getLastIndex(void)const
{
	int LastIndex = 0;
	while (LastIndex < MAX_CONTACTS)
	{
		if (contacts[LastIndex].getFirstName().empty())
			break ;
		LastIndex++;
	}
	return (LastIndex);
}

void PhoneBook::displayAll(void)const
{
	int i;

	i = 0;
	std::cout << "|==========|==========|==========|==========|" << std::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	std::cout << "|==========|==========|==========|==========|" << std::endl;
	while (i < MAX_CONTACTS)
	{
		if (contacts[i].getFirstName().empty())
			break ;
		contacts[i].displayInstant(i);
		i++;
	}
	std::cout << "|==========|==========|==========|==========|" << std::endl;
}

void PhoneBook::search(void)const
{
	int input;
	
	displayAll();
	while (1)
	{
		std::cout << "[Please enter the contact index from displayed index number above.]" << std::endl;
		std::cout << "> ";
		std::cin >> input;
		if (!std::cin.fail() && input >= 0 && input < getLastIndex())
		{
			contacts[input].displayDetail();
			break ;
		}
		else
		{
			std::cout << "[Invalid input.]" << std::endl;
			std::cin.clear();
			std::cin.ignore(1024, '\n');
		}
	}
}

void PhoneBook::exit(void)const
{
	std::cout << "[Finished.]" << std::endl;
	std::exit(0);
}

