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
	std::cout << type_ << " constructor called " << std::endl;
}

Cat::~Cat() {
	std::cout << type_ << " destructor called " << std::endl;
}

void Cat::makeSound() const {
	std::cout << "meow! meow!" << std::endl;
}