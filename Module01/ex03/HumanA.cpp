/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgargant <dgargant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 12:38:01 by dgargant          #+#    #+#             */
/*   Updated: 2025/08/22 11:39:32 by dgargant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(&weapon), _name(name)
{
	std::cout << PURPLE << "Human A Constructor called" << RESET << std::endl;
}

HumanA::~HumanA()
{
	std::cout << PURPLE << "Human A Destructor called" << RESET << std::endl;
}

void HumanA::attack()
{
	std::cout << RED << this->_name << " attacks with their " << this->_weapon->getType() << RESET<<std::endl;
}