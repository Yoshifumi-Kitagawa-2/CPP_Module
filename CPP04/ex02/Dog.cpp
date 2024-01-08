/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 14:45:33 by yokitaga          #+#    #+#             */
/*   Updated: 2024/01/08 22:59:30 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog") {
	std::cout << "[" << _type << "] constructor called at Dog.cpp" << std::endl;
	_brain = new Brain();
}

Dog::Dog(Dog const &src) : AAnimal(src) {
	*this = src;
	std::cout << "[" << _type << "] copy constructor called at Dog.cpp" << std::endl;
}

Dog &Dog::operator=(Dog const &right) {
	if (this != &right)
	{
		_type = right._type;
		_brain = new Brain(*right._brain);
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