/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 17:24:31 by yokitaga          #+#    #+#             */
/*   Updated: 2024/01/03 18:02:38 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	std::cout << "FragTrap constructor called" << "name: " << _name << std::endl;
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor called" << "name: " << _name << std::endl;
}

void	FragTrap::attack(std::string const &target) {
	if (_energy_points == 0) {
		std::cout << "FragTrap " << this->_name << " has no energy points." << std::endl;
		return ;
	}
	std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
	_energy_points--;
}

void	FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap " << this->_name << " wants high five guys." << std::endl;
}