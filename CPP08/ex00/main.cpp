/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 15:02:40 by yokitaga          #+#    #+#             */
/*   Updated: 2024/02/18 18:19:03 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <stdexcept>
#include <vector>

int main()
{
	std::vector<int> numbers;
	numbers.push_back(1);
	numbers.push_back(2);
	numbers.push_back(3);
	numbers.push_back(4);
	numbers.push_back(5);

    try {
        int target_value = 2;

        std::vector<int>::iterator it = easyfind(numbers, target_value);

        std::cout << "Value:" << target_value << std::endl;
		std::cout << "index:" << *it << std::endl;
    } catch (const std::out_of_range& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    try {
        int target_value = 7;

        std::vector<int>::iterator it = easyfind(numbers, target_value);
        std::cout << "Value " << target_value << std::endl;
		std::cout << "index:" << *it << std::endl;
    } catch (const std::out_of_range& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
	return (0);
}