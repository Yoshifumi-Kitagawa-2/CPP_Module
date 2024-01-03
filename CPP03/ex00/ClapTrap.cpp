/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 00:30:11 by yokitaga          #+#    #+#             */
/*   Updated: 2024/01/03 16:20:14 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0) {
	std::cout << "ClapTrap constructor called" << std::endl;
	std::cout << "name: " << _name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src) {
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destructor called" << _name << std::endl;
}

ClapTrap&   ClapTrap::operator=( const ClapTrap& rhs ) {
    this->_name = rhs._name;
    this->_hit_points = rhs._hit_points;
    this->_energy_points = rhs._energy_points;
    this->_attack_damage = rhs._attack_damage;
    return *this;
}

void	ClapTrap::attack(std::string const &target) {
	if (_energy_points == 0) {
		std::cout << "ClapTrap " << _name << " has no energy points." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
	_energy_points--;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (_hit_points == 0) {
		std::cout << "ClapTrap " << _name << " has no hit points." <<  _name << "is dead." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
	if (amount >= _hit_points)
		_hit_points = 0;
	else
		_hit_points -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (_energy_points == 0) {
		std::cout << "ClapTrap " << _name << " cannot repairs itself because of no energy points. " << std::endl;
		return ;
	}
	if (_hit_points == 0) {
		std::cout << "ClapTrap " << _name << " cannot repairs itself beacuse of no hit points." << std::endl;
		return ;
	}
	_hit_points += amount;
	_energy_points--;
	std::cout << "ClapTrap " << _name << " is repaired " << amount << " points of damage!" << std::endl;
	std::cout << "ClapTrap " << _name << " has now " << _hit_points << " hit points." << std::endl;
}
