/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgargant <dgargant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 12:37:54 by dgargant          #+#    #+#             */
/*   Updated: 2025/08/21 14:55:03 by dgargant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _weapon(NULL), _name(name)
{
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon weapon)
{
	this->_weapon = weapon;
}

void HumanB::attack()
{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}