/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 18:17:47 by yokitaga          #+#    #+#             */
/*   Updated: 2023/12/17 18:31:39 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *zombieHorde( int N, std::string name )
{
	Zombie	*zombie;
	int		i;

	zombie = new Zombie[N];
	i = 0;
	while (i < N)
	{
		zombie[i].set_name(name);
		i++;
	}
	return (zombie);
}