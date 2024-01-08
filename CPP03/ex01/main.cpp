/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 00:27:16 by yokitaga          #+#    #+#             */
/*   Updated: 2024/01/08 16:28:54 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
	ScavTrap a("Test1");

	a.attack("Test2");
	a.ClapTrap::attack("Test2");
	a.ScavTrap::attack("Test2");
	a.takeDamage(3);
	a.beRepaired(10);
	a.guardGate();
	return 0;
}