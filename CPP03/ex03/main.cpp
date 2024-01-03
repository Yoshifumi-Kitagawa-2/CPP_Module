/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 00:27:16 by yokitaga          #+#    #+#             */
/*   Updated: 2024/01/03 18:01:41 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main() {
	FragTrap a("Max");

	a.attack("Jasmine");
	a.ClapTrap::attack("Jasmine");
	a.takeDamage(3);
	a.beRepaired(10);
	a.highFivesGuys();
	return 0;
}