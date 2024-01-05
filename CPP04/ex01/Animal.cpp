/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 00:13:34 by yokitaga          #+#    #+#             */
/*   Updated: 2024/01/05 15:24:45 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal") {
	std::cout << _type << " constructor called " << std::endl;
}

Animal::Animal(std::string type) : _type(type) {
	std::cout << _type << " constructor called " << std::endl;
}

Animal::Animal(const Animal &src) {
	std::cout << _type << " copy constructor called " << std::endl;
	*this = src;
}

Animal &Animal::operator=(const Animal &right) {
	std::cout << _type << " assignation operator called " << std::endl;
	if (this != &right)
		_type = right._type;
	return (*this);
}

Animal::~Animal() {
	std::cout << "Animal destructor called " << std::endl;
}

std::string Animal::getType() const {
	return (_type);
}

void Animal::makeSound() const {
	std::cout << "Animal makeSound called " << std::endl;
}