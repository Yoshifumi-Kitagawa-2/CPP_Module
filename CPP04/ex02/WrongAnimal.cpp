/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 15:33:12 by yokitaga          #+#    #+#             */
/*   Updated: 2024/01/27 18:58:05 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type_("WrongAnimal") {
	std::cout << type_ << " constructor called " << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : type_(type) {
	std::cout << type_ << " constructor called " << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src) {
	std::cout << type_ << " copy constructor called " << std::endl;
	*this = src;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &right) {
	std::cout << type_ << " assignation operator called " << std::endl;
	if (this != &right)
		type_ = right.type_;
	return (*this);
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor called " << std::endl;
}

std::string WrongAnimal::getType() const {
	return (type_);
}

void WrongAnimal::makeSound() const {
	std::cout << "WrongAnimal makeSound called " << std::endl;
}