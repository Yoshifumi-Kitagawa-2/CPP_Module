/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 00:04:03 by yokitaga          #+#    #+#             */
/*   Updated: 2023/12/12 00:12:54 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main()
{
	PhoneBook phonebook;
	std::string input;

	input = "";
	while (input != "EXIT")
	{
		std::cout << "=============Please enter ADD, SEARCH or EXIT.=============" << std::endl;
		std::cout << "> ";
		std::cin >> input;
		if (input == "ADD")
			phonebook.add();
		else if (input == "SEARCH")
			phonebook.search();
		else if (input == "EXIT")
			phonebook.exit();
		else
			std::cout << "Invalid input." << std::endl;
	}
	return (0);
}