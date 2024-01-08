/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 14:45:17 by yokitaga          #+#    #+#             */
/*   Updated: 2024/01/08 18:24:31 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	std::cout << _type << " constructor called " << std::endl;
	try {
		_brain = new Brain();
	}
	catch (std::bad_alloc &e) {
		std::cout << e.what() << std::endl;
	}
}

Cat::Cat(Cat const &src) : Animal(src) {
	std::cout << _type << " copy constructor called " << std::endl;
	*this = src;
}

Cat &Cat::operator=(Cat const &right) {
	std::cout << "Cat assignation operator called" << std::endl;
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

Cat::~Cat() {
	delete _brain;
	std::cout << _type << " destructor called " << std::endl;
}

void Cat::makeSound() const {
	std::cout << "meow! meow!" << std::endl;
}