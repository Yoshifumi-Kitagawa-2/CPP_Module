/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 18:17:47 by yokitaga          #+#    #+#             */
/*   Updated: 2024/01/06 20:16:30 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *zombieHorde( int num, std::string name )
{
	Zombie	*zombie;
	int		i;

	zombie = new Zombie[num];
	i = 0;
	while (i < num)
	{
		zombie[i].setName(name);
		i++;
	}
	return (zombie);
}