/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 00:13:38 by yokitaga          #+#    #+#             */
/*   Updated: 2024/01/08 18:14:38 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	//success delete because of virtual destructor
	std::cout << "==========success override and delete because of virtual function and virtual destructor==========" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << "==========success override==========" << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	std::cout << "==========success delete==========" << std::endl;
	delete meta;
	delete j;
	delete i;
	//failed delete because of non-virtual destructor
	std::cout << "==========failed override and delete because of non-virtual function and non-virtual destructor==========" << std::endl;
	const WrongAnimal* wrong_meta = new WrongAnimal();
	const WrongAnimal* wrong_i = new WrongCat();
	std::cout << wrong_i->getType() << " " << std::endl;
	std::cout << "==========failed override==========" << std::endl;
	wrong_i->makeSound();
	wrong_meta->makeSound();
	std::cout << "==========failed delete==========" << std::endl;
	delete wrong_meta;
	delete wrong_i;
	return 0;
}