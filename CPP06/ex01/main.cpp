/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 19:03:52 by yokitaga          #+#    #+#             */
/*   Updated: 2024/02/10 23:20:36 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Serializer s;
	Data data;
	data.s1 = "Hello";
	data.s2 = "World";
	uintptr_t raw = s.serialize(&data);
	Data *ptr = s.deserialize(raw);
	std::cout << "s1: " << ptr->s1 << std::endl;
	std::cout << "s2: " << ptr->s2 << std::endl;
	return 0;
}

