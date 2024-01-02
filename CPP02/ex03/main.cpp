/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 18:50:37 by yokitaga          #+#    #+#             */
/*   Updated: 2024/01/03 00:22:18 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main( void ) {
	bool bsp(Point const a, Point const b, Point const c, Point const point);
	
	if (bsp(Point(0, 0), Point(1, 0), Point(0, 1), Point(0.25, 0.25)))
	{
		std::cout << "Point is inside the triangle." << std::endl;
	}
	else
	{
		std::cout << "Point is not inside the triangle." << std::endl;
	}
	if (bsp( Point(0, 0), Point(10, 30), Point(20, 0), Point(1, 3)))
	{
		std::cout << "Point is inside the triangle." << std::endl;
	}
	else
	{
		std::cout << "Point is not inside the triangle." << std::endl;
	}
	return 0;
}