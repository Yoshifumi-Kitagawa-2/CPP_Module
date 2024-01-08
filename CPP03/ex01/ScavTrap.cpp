/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 16:24:45 by yokitaga          #+#    #+#             */
/*   Updated: 2024/01/08 16:52:37 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << "[ScavTrap] constructor called" << "[name: " << _name << "]" << std::endl;
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &src): ClapTrap(src) {
	*this = src;
	std::cout << "[ScavTrap] copy constructor called" << "[name: " << _name << "]" << std::endl;
}

ScavTrap&   ScavTrap::operator=( const ScavTrap& right ) {
	if (this != &right) {
		_name = right._name;
		_hit_points = right._hit_points;
		_energy_points = right._energy_points;
		_attack_damage = right._attack_damage;
	}
	std::cout << "[ScavTrap] assignation operator called" << "[name: " << _name << "]" << std::endl;
	return *this;
}

ScavTrap::~ScavTrap() {
	std::cout << "[ScavTrap] destructor called" << "[name: " << _name << "]" << std::endl;
}

void	ScavTrap::attack(const std::string &target) {
	if (_energy_points == 0) {
		std::cout << "[ScavTrap] " << _name << " cannot attack because of no energy points." << std::endl;
		return ;
	}
	_energy_points--;
	std::cout << "[ScavTrap] " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << _energy_points << " energy points left." << std::endl;
}

void    ScavTrap::guardGate() {
    std::cout << "[ScavTrap] " << _name << " is now in Gate keeper mode." << std::endl;
}