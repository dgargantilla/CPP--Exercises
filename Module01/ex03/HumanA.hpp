/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgargant <dgargant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 12:37:58 by dgargant          #+#    #+#             */
/*   Updated: 2025/08/22 11:01:30 by dgargant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMANA_H
# define HUMANA_H

# include <iostream>
# include "Weapon.hpp"

# define RED "\001\033[0;31m\002"
# define GREEN "\001\033[0;32m\002"
# define PURPLE "\001\033[0;95m\002"
# define RESET "\001\033[0m\002"

class HumanA
{
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		void attack();
	private:
		Weapon *_weapon;
		std::string _name;
};


#endif