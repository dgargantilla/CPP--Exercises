/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgargant <dgargant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 12:36:19 by dgargant          #+#    #+#             */
/*   Updated: 2025/08/21 14:36:43 by dgargant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WEAPON_H
# define WEAPON_H

# include <iostream>

class Weapon
{
	public:
		Weapon(std::string type);
		~Weapon();
		void setType(std::string type);
		std::string getType();
	private:
		std::string _type;
};


#endif