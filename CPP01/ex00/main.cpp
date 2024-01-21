/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 17:44:23 by yokitaga          #+#    #+#             */
/*   Updated: 2024/01/21 19:24:21 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *zombie;

	zombie = newZombie("yokitaga on heap");
	zombie->announce();
	delete zombie;
	randomChump("yokita on stack");
	return (0);
}