/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 14:45:33 by yokitaga          #+#    #+#             */
/*   Updated: 2024/01/08 19:34:03 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	std::cout << "[" << _type << "] constructor called at Dog.cpp" << std::endl;
	try {
		_brain = new Brain();
	}
	catch (std::bad_alloc &e) {
		std::cout << e.what() << std::endl;
	}
}

Dog::Dog(Dog const &src) : Animal(src) {
	*this = src;
	std::cout << "[" << _type << "] copy constructor called at Dog.cpp" << std::endl;
}

Dog &Dog::operator=(Dog const &right) {
	if (this != &right)
	{
		_type = right._type;
		if (_brain)
			delete _brain;
		try {
			_brain = new Brain(*right._brain);
		}
		catch (std::bad_alloc &e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "[" << _type << "] assignation operator called at Dog.cpp" << std::endl;
	return (*this);
}

Dog::~Dog() {
	delete _brain;
	std::cout << "[" << _type << "] destructor called at Dog.cpp" << std::endl;
}

void Dog::makeSound() const {
	std::cout << "woof! woof!" << std::endl;
}