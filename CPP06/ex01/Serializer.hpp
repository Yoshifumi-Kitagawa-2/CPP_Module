/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 19:26:07 by yokitaga          #+#    #+#             */
/*   Updated: 2024/02/10 23:02:25 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <string>

typedef struct Data
{
	std::string s1;
	std::string s2;
} Data;

class Serializer
{
	private:
		Data *data_;
	public:
		Serializer();
		Serializer(const Serializer &src);
		Serializer &operator=(const Serializer &src);
		~Serializer();
		uintptr_t serialize(Data* ptr);
		Data* deserialize(uintptr_t raw);	
};

#endif