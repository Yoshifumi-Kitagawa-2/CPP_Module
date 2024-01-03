/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 16:24:45 by yokitaga          #+#    #+#             */
/*   Updated: 2024/01/03 17:21:16 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << "ScavTrap constructor called" << "name: " << _name << std::endl;
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor called" << "name: " << _name << std::endl;
}

void	ScavTrap::attack(std::string const &target) {
	if (_energy_points == 0) {
		std::cout << "ScavTrap " << this->_name << " has no energy points." << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
	_energy_points--;
}

void    ScavTrap::guardGate() {
    std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode." << std::endl;
}