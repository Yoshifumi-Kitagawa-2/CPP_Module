/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 14:45:17 by yokitaga          #+#    #+#             */
/*   Updated: 2024/01/08 22:59:08 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal("Cat") {
	std::cout << "[" << _type << "] constructor called at Cat.cpp" << std::endl;
	_brain = new Brain();
}

Cat::Cat(Cat const &src) : AAnimal(src) {
	*this = src;
	std::cout << "[" << _type << "] copy constructor called at Cat.cpp" << std::endl;
}

Cat &Cat::operator=(Cat const &right) {
	if (this != &right)
	{
		_type = right._type;
		_brain = new Brain(*right._brain);
	}
	std::cout << "[" << _type << "] assignation operator called at Cat.cpp" << std::endl;
	return (*this);
}

Cat::~Cat() {
	delete _brain;
	std::cout << "[" << _type << "] destructor called at Cat.cpp" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "meow! meow!" << std::endl;
}