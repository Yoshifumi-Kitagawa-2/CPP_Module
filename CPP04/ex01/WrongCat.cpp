/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 15:33:30 by yokitaga          #+#    #+#             */
/*   Updated: 2024/01/05 15:37:12 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
	std::cout << _type << " constructor called " << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << _type << " destructor called " << std::endl;
}

void WrongCat::makeSound() const {
	std::cout << "meow! meow!" << std::endl;
}