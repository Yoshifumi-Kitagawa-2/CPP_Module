/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 14:45:17 by yokitaga          #+#    #+#             */
/*   Updated: 2024/01/08 17:50:37 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	std::cout << _type << " constructor called " << std::endl;
}

Cat::~Cat() {
	std::cout << _type << " destructor called " << std::endl;
}

void Cat::makeSound() const {
	std::cout << "meow! meow!" << std::endl;
}