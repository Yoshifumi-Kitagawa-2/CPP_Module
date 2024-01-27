/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 14:45:33 by yokitaga          #+#    #+#             */
/*   Updated: 2024/01/27 18:58:05 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	std::cout << type_ << " constructor called " << std::endl;
}

Dog::~Dog() {
	std::cout << type_ << " destructor called " << std::endl;
}

void Dog::makeSound() const {
	std::cout << "woof! woof!" << std::endl;
}