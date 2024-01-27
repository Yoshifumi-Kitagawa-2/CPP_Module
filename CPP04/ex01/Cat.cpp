/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 14:45:17 by yokitaga          #+#    #+#             */
/*   Updated: 2024/01/27 18:58:05 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	std::cout << "[" << type_ << "] constructor called at Cat.cpp" << std::endl;
	_brain = new Brain();
}

Cat::Cat(Cat const &src) : Animal(src) {
	*this = src;
	std::cout << "[" << type_ << "] copy constructor called at Cat.cpp" << std::endl;
}

Cat &Cat::operator=(Cat const &right) {
	if (this != &right)
	{
		type_ = right.type_;
		_brain = new Brain(*right._brain);
	}
	std::cout << "[" << type_ << "] assignation operator called at Cat.cpp" << std::endl;
	return (*this);
}

Cat::~Cat() {
	delete _brain;
	std::cout << "[" << type_ << "] destructor called at Cat.cpp" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "meow! meow!" << std::endl;
}