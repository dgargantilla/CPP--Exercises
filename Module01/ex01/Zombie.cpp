/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgargant <dgargant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 10:34:32 by dgargant          #+#    #+#             */
/*   Updated: 2025/08/21 10:51:52 by dgargant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << this->_name << "Constructor called" << std::endl;
}

Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << this->_name << " Constructor called" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->_name <<" Destructor called" << std::endl;
}

void Zombie::setName(std::string name)
{
	this->_name = name;
}

void Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

