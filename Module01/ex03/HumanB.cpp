/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgargant <dgargant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 12:37:54 by dgargant          #+#    #+#             */
/*   Updated: 2025/08/22 11:46:46 by dgargant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _weapon(NULL), _name(name)
{
	std::cout << PURPLE << "Human B Constructor called" << RESET << std::endl;
}

HumanB::~HumanB()
{
	std::cout << PURPLE << "Human B Destructor called" << RESET << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	Weapon *w = &weapon;
	if (!w && this->_weapon == NULL)
		std::cout << GREEN << "HumanB didn't find a weapon" << RESET << std::endl;
	else if (!w)
	{
		this->_weapon = &weapon;
		std::cout << GREEN << "HumanB dropped the weapon" << RESET << std::endl;
	}
	else
	{
		this->_weapon = &weapon;
		std::cout << GREEN << "HumanB found a new weapon" << RESET << std::endl;
	}
}

void HumanB::attack()
{
	if (this->_weapon)
		std::cout << RED << this->_name << " attacks with their " << this->_weapon->getType() << RESET << std::endl;
	else
		std::cout << RED << this->_name << "  does not attack " << this->_weapon->getType() << RESET << std::endl;
}