/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgargant <dgargant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 12:38:04 by dgargant          #+#    #+#             */
/*   Updated: 2025/08/21 14:43:38 by dgargant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMANB_H
# define HUMANB_H

# include <iostream>
# include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string name);
		~HumanB();
		void setWeapon(Weapon weapon);
		void attack();
	private:
		Weapon _weapon;
		std::string _name;
};


#endif