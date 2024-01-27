/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 00:13:34 by yokitaga          #+#    #+#             */
/*   Updated: 2024/01/27 18:58:05 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type_("Animal") {
	std::cout << type_ << " constructor called " << std::endl;
}

Animal::Animal(std::string type) : type_(type) {
	std::cout << type_ << " constructor called " << std::endl;
}

Animal::Animal(const Animal &src) {
	*this = src;
	std::cout << type_ << " copy constructor called " << std::endl;
}

Animal &Animal::operator=(const Animal &right) {
	if (this != &right)
		type_ = right.type_;
	std::cout << type_ << " assignation operator called " << std::endl;
	return (*this);
}

Animal::~Animal() {
	std::cout << "Animal destructor called " << std::endl;
}

std::string Animal::getType() const {
	return (type_);
}

void Animal::makeSound() const {
	std::cout << "Animal makeSound called " << std::endl;
}