/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 17:24:31 by yokitaga          #+#    #+#             */
/*   Updated: 2024/01/08 17:18:27 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	std::cout << "[FragTrap] constructor called" << "[name: " << _name << "]" << std::endl;
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &src): ClapTrap(src) {
	*this = src;
	std::cout << "[FragTrap] copy constructor called" << "[name: " << _name << "]" << std::endl;
}

FragTrap&   FragTrap::operator=( const FragTrap& right ) {
	if (this != &right) {
		_name = right._name;
		_hit_points = right._hit_points;
		_energy_points = right._energy_points;
		_attack_damage = right._attack_damage;
	}
	std::cout << "[FragTrap] assignation operator called" << "[name: " << _name << "]" << std::endl;
	return *this;
}

FragTrap::~FragTrap() {
	std::cout << "[FragTrap] destructor called" << "[name: " << _name << "]" << std::endl;
}

void	FragTrap::attack(const std::string &target) {
	if (_energy_points == 0) {
		std::cout << "[FragTrap] " << _name << " cannot attack because of no energy points." << std::endl;
		return ;
	}
	_energy_points--;
	std::cout << "[FragTrap] " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << _energy_points << " energy points left." << std::endl;
}

void	FragTrap::highFivesGuys(void) {
	std::cout << "[FragTrap] " << _name << " wants high five guys." << std::endl;
}