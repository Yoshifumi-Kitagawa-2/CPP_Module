/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 00:13:38 by yokitaga          #+#    #+#             */
/*   Updated: 2024/01/08 19:30:00 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main( void )
{
    std::cout << "========Test 1 : easy test========" << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;
    delete i;

    std::cout << "========Test 2: deep copy========" << std::endl;
    std::cout << "========create dog1========" << std::endl;
    const Dog* dog1 = new Dog();
    std::cout << "========copy constructor:dog2 = new Dog(*dog1);========" << std::endl;
    const Dog* dog2 = new Dog(*dog1);
    std::cout << "========delete dog1, dog2========" << std::endl;
    delete dog2;
    delete dog1;

    std::cout << "========Test 3: deep copy========" << std::endl;
    std::cout << "========create cat1========" << std::endl;
    const Cat* cat1 = new Cat();
    std::cout << "========copy constructor:cat2 = new Cat(*cat1);========" << std::endl;
    const Cat* cat2 = new Cat(*cat1);
    std::cout << "========delete cat1, cat2========" << std::endl;
    delete cat2;
    delete cat1;
    return 0;
}