/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 18:17:27 by yokitaga          #+#    #+#             */
/*   Updated: 2024/01/06 20:15:54 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombie;

	zombie = zombieHorde(5, "yokitaga");
	for (int i = 0; i < 5; i++)
		zombie[i].announce();
	delete [] zombie;
	return (0);
}