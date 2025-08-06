/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgargant <dgargant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 12:08:11 by dgargant          #+#    #+#             */
/*   Updated: 2025/08/06 14:50:45 by dgargant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main()
{
	PhoneBook phone = PhoneBook();
	phone.InitMenu();
	phone.~PhoneBook();
}