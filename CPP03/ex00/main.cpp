/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 00:27:16 by yokitaga          #+#    #+#             */
/*   Updated: 2024/01/03 16:19:56 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
	ClapTrap a("A");

	a.attack("B");
	a.takeDamage(3);
	a.beRepaired(10);

	ClapTrap b = ClapTrap(a);
	b.attack("a");
	return 0;
}