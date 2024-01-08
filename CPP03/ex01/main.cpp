/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 00:27:16 by yokitaga          #+#    #+#             */
/*   Updated: 2024/01/08 16:36:44 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
	std::cout << "===========================test about four functions===========================" << std::endl;
	ScavTrap a("Test1");

	//attack
	a.attack("Test2");//ScavTrap::attack
	a.ClapTrap::attack("Test2");//ClapTrap::attack
	a.ScavTrap::attack("Test2");//ScavTrap::attack
	//takeDamage/hit_points 100 → 10
	a.takeDamage(90);
	//beRepaired/hit_points 10 → 20
	a.beRepaired(10);
	//guardGate
	a.guardGate();
	std::cout << "===========================test about hit points===========================" << std::endl;
	//hit_points 20 → 0
	a.takeDamage(20);
	//can't be repaired
	a.beRepaired(10);
	//can't take damage
	a.takeDamage(10);
	std::cout << "===========================test about energy points===========================" << std::endl;
	ScavTrap b("Test2");
	int i = 0;
	//energy_points 50 → 0
	while (i < 50) {
		b.attack("B");
		i++;
	}
	//can't attack
	b.attack("B");
	//cann't be repaired
	b.beRepaired(10);

	std::cout << "===========================test about copy constructor===========================" << std::endl;
	ScavTrap c("Test3");
	ScavTrap d(c);
	ScavTrap e = d;
	//attack
	c.attack("B");
	d.attack("B");
	e.attack("B");
	return 0;
}