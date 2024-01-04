/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 00:27:16 by yokitaga          #+#    #+#             */
/*   Updated: 2024/01/04 23:43:26 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main() {
	DiamondTrap a("Max");

	a.attack("Max");
	a.FragTrap::attack("Jasmine");
	a.takeDamage(3);
	a.beRepaired(10);
	a.highFivesGuys();
	a.guardGate();
	a.whoAmI();

	std::cout << "----" << std::endl;
	DiamondTrap b = a;
	b.whoAmI();
	return 0;
}