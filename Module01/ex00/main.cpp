/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgargant <dgargant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 10:33:58 by dgargant          #+#    #+#             */
/*   Updated: 2025/08/19 11:52:20 by dgargant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie zombie1 = Zombie();
	zombie1.announce();
	
	std::cout << std::endl;
	
	Zombie* zombie2 = newZombie("pedro");
	zombie2->announce();
	delete(zombie2);

	std::cout << std::endl;
	
	randomChump("paco");
	
	std::cout << std::endl;
}
