/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgargant <dgargant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 12:36:19 by dgargant          #+#    #+#             */
/*   Updated: 2025/08/22 11:42:07 by dgargant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WEAPON_H
# define WEAPON_H

# include <iostream>

# define RED "\001\033[0;31m\002"
# define GREEN "\001\033[0;32m\002"
# define PURPLE "\001\033[0;95m\002"
# define RESET "\001\033[0m\002"
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