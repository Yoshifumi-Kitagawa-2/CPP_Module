/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 20:32:39 by yokitaga          #+#    #+#             */
/*   Updated: 2023/12/12 00:21:05 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook():currentIndex(0){}//currentindexを0で初期化

PhoneBook::~PhoneBook(){}

void PhoneBook::add(void)
{
	if (currentIndex == MAX_CONTACTS - 1)
		currentIndex = 0;
	contacts[currentIndex].initForAddContact();
	contacts[currentIndex].setIndexForAdd(currentIndex);
	currentIndex++;
}

void PhoneBook::search(void)const
{
	int input;
	while (1)
	{
		std::cout << "Please enter the contact index between 0 and 7." << std::endl;
		std::cout << "> ";
		std::cin >> input;
		if (std::cin.eof())
			exit();
		if (std::cin.good() && input >= 0 && input < MAX_CONTACTS){
			contacts[input].display();
			break ;
		}
		else
		{
			std::cout << "Invalid input." << std::endl;
			std::cin.clear();
			std::cin.ignore(1000000, '\n');
			continue ;
		}
	}
}

void PhoneBook::exit(void)const
{
	std::cout << "Finished." << std::endl;
	std::exit(0);
}

