/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 00:27:16 by yokitaga          #+#    #+#             */
/*   Updated: 2024/01/03 17:21:10 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
	ScavTrap a("Max");

	a.attack("Jasmine");
	a.ClapTrap::attack("Jasmine");
	a.ScavTrap::attack("Jasmine");
	a.takeDamage(3);
	a.beRepaired(10);
	a.guardGate();
	return 0;
}