/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 19:25:56 by yokitaga          #+#    #+#             */
/*   Updated: 2024/02/10 23:15:43 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
	data_ = NULL;
}

Serializer::Serializer(const Serializer &src)
{
	*this = src;
}

Serializer &Serializer::operator=(const Serializer&src)
{
	if (this == &src)
		return *this;
	data_ = src.data_;
	return *this;
}

Serializer::~Serializer()
{
}

uintptr_t Serializer::serialize(Data* ptr)
{
	data_ = ptr;
	return reinterpret_cast<uintptr_t>(data_);
}

Data* Serializer::deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}