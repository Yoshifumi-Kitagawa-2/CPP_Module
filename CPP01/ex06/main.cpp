/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 17:55:53 by yokitaga          #+#    #+#             */
/*   Updated: 2023/12/31 18:41:21 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	std::string input;
	Harl harl;
	std::cout << "Hello, world!" << std::endl;

	do
	{
		std::cout << "Enter a command {DEBUG/INFO/WARNING/ERROR}: ";
		std::cin >> input;
		harl.complain(input);
	} while (1);
	return (0);
}