/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgargant <dgargant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 12:41:45 by dgargant          #+#    #+#             */
/*   Updated: 2025/08/19 14:42:40 by dgargant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie* horde = zombieHorde(8, "pacoPico");
	for (size_t i = 0; i < 8; i++)
	{
		horde[i].announce();
	}
	delete[] horde;
}