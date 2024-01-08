/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 15:33:12 by yokitaga          #+#    #+#             */
/*   Updated: 2024/01/08 18:07:00 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal") {
	std::cout << _type << " constructor called " << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type) {
	std::cout << _type << " constructor called " << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src) {
	std::cout << _type << " copy constructor called " << std::endl;
	*this = src;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &right) {
	std::cout << _type << " assignation operator called " << std::endl;
	if (this != &right)
		_type = right._type;
	return (*this);
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor called " << std::endl;
}

std::string WrongAnimal::getType() const {
	return (_type);
}

void WrongAnimal::makeSound() const {
	std::cout << "WrongAnimal makeSound called " << std::endl;
}