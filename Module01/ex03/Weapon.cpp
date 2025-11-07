/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgargant <dgargant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 12:38:08 by dgargant          #+#    #+#             */
/*   Updated: 2025/08/22 11:43:17 by dgargant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
	std::cout << PURPLE << "Weapon Constructor called" << RESET << std::endl;
}

Weapon::~Weapon()
{
	std::cout << PURPLE << "Weapon Destructor called" << RESET << std::endl;
}

void Weapon::setType(std::string type)
{
	this->_type = type;
}

std::string Weapon::getType()
{
	return(this->_type);
}