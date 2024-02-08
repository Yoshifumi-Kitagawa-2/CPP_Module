/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 16:08:53 by yokitaga          #+#    #+#             */
/*   Updated: 2024/02/08 23:28:56 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Invalid argments. Please Input like ./conver something." << std::endl;
		return (EXIT_FAILURE);
	}
	ScalarConverter ScalarConvert(argv[1]);
	std::cout << ScalarConvert;
	return (0);
}