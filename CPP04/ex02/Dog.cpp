/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 14:45:33 by yokitaga          #+#    #+#             */
/*   Updated: 2024/01/05 16:22:04 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	std::cout << _type << " constructor called " << std::endl;
	try {
		_brain = new Brain();
	}
	catch (std::bad_alloc &e) {
		std::cout << e.what() << std::endl;
	}
}

Dog &Dog::operator=(Dog const &right) {
	std::cout << "Dog assignation operator called" << std::endl;
	if (this != &right)
	{
		_type = right._type;
		delete _brain;
		try {
			_brain = new Brain(*right._brain);
		}
		catch (std::bad_alloc &e) {
			std::cout << e.what() << std::endl;
		}
	}
	return (*this);
}

Dog::Dog(Dog const &src) : Animal(src) {
	std::cout << _type << " copy constructor called " << std::endl;
	*this = src;
}

Dog::~Dog() {
	delete _brain;
	std::cout << _type << " destructor called " << std::endl;
}

void Dog::makeSound() const {
	std::cout << "woof! woof!" << std::endl;
	
}