/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 00:13:34 by yokitaga          #+#    #+#             */
/*   Updated: 2024/01/27 23:46:48 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : type_("AAnimal") {
	std::cout << "[" << type_ << "] constructor called at AAnimal.cpp" << std::endl;
}

AAnimal::AAnimal(std::string type) : type_(type) {
	std::cout << "[" << type_ << "] constructor called at AAnimal.cpp" << std::endl;
}

AAnimal::AAnimal(const AAnimal &src) {
	*this = src;
	std::cout << "[" << type_ << "] copy constructor called at AAnimal.cpp" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &right) {
	if (this != &right)
		type_ = right.type_;
	std::cout << "[" << type_ << "] operator= called at AAnimal.cpp" << std::endl;
	return (*this);
}

AAnimal::~AAnimal() {
	std::cout << "[" << type_ << "] destructor called at AAnimal.cpp" << std::endl;
}

std::string AAnimal::getType() const {
	return (type_);
}