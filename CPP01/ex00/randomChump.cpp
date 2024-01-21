/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 17:44:35 by yokitaga          #+#    #+#             */
/*   Updated: 2024/01/21 23:21:13 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    randomChump( std::string name ) {
    Zombie  zombie( name );
    std::cout << "[in randomChump] " << name << " is created by stack." << std::endl;
    zombie.announce();
}