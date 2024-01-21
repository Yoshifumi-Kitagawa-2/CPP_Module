/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 22:55:19 by yokitaga          #+#    #+#             */
/*   Updated: 2024/01/20 18:07:36 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	Bureacrat *bureacrat;
	try
	{
		bureacrat = new Bureacrat("bureacrat", 1);
		std::cout << *bureacrat;
		bureacrat->incrementGrade();
		std::cout << *bureacrat;
		bureacrat->incrementGrade();
		std::cout << *bureacrat;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	delete bureacrat;

	try
	{
		bureacrat = new Bureacrat("bureacrat", 150);
		std::cout << *bureacrat;
		bureacrat->decrementGrade();
		std::cout << *bureacrat;
		bureacrat->decrementGrade();
		std::cout << *bureacrat;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	delete bureacrat;

	//後ほどテストを追加する
	return (0);
}