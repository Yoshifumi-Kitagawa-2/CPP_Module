/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 00:30:11 by yokitaga          #+#    #+#             */
/*   Updated: 2024/01/08 16:53:08 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0) {
	std::cout << "[ClapTrap] constructor called" << "[name: " << _name << "]" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src) {
	*this = src;
	std::cout << "[ClapTrap] copy constructor called" << "[name: " << _name << "]" << std::endl;
}

ClapTrap&   ClapTrap::operator=( const ClapTrap& right ) {
	if (this != &right) {
		_name = right._name;
		_hit_points = right._hit_points;
		_energy_points = right._energy_points;
		_attack_damage = right._attack_damage;
	}
	std::cout << "[ClapTrap] assignation operator called" << "[name: " << _name << "]" << std::endl;
    return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << "[ClapTrap] destructor called" << "[name: " << _name << "]" << std::endl;
}

void	ClapTrap::attack(const std::string &target) {
	if (_energy_points == 0) {
		std::cout << "[ClapTrap] " << _name << " cannot attack because of no energy points." << std::endl;
		return ;
	}
	_energy_points--;
	std::cout << "[ClapTrap] " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << _energy_points << " energy points left." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (_hit_points == 0) {
		std::cout << "[ClapTrap] " << _name << " has no hit points." <<  _name << " is dead." << std::endl;
		return ;
	}
	if (amount >= _hit_points)
		_hit_points = 0;
	else
		_hit_points -= amount;
	std::cout << "[ClapTrap] " << _name << " takes " << amount << " points of damage!" << _hit_points << " hit points left." << std::endl;	
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (_energy_points == 0) {
		std::cout << "[ClapTrap] " << _name << " cannot repairs itself because of no energy points. " << std::endl;
		return ;
	}
	if (_hit_points == 0) {
		std::cout << "[ClapTrap] " << _name << " cannot repairs itself beacuse of no hit points." << std::endl;
		return ;
	}
	_hit_points += amount;
	_energy_points--;
	std::cout << "[ClapTrap] " << _name << " is repaired " << amount << " hit points." << std::endl;
	std::cout << "[ClapTrap] " << _name << " has now " << _hit_points << " hit points and " << _energy_points << " energy points." << std::endl;
}
