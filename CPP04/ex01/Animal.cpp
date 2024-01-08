/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 00:13:34 by yokitaga          #+#    #+#             */
/*   Updated: 2024/01/08 19:04:27 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal") {
	std::cout << "[" << _type << "] constructor called at Animal.cpp" << std::endl;
}

Animal::Animal(std::string type) : _type(type) {
	std::cout << "[" << _type << "] constructor called at Animal.cpp" << std::endl;
}

Animal::Animal(const Animal &src) {
	*this = src;
	std::cout << "[" << _type << "] copy constructor called at Animal.cpp" << std::endl;
}

Animal &Animal::operator=(const Animal &right) {
	if (this != &right)
		_type = right._type;
	std::cout << "[" << _type << "] assignation operator called at Animal.cpp" << std::endl;
	return (*this);
}

Animal::~Animal() {
	std::cout << "[" << _type << "] destructor called at Animal.cpp" << std::endl;
}

std::string Animal::getType() const {
	return (_type);
}

void Animal::makeSound() const {
	std::cout << "Animal makeSound called " << std::endl;
}