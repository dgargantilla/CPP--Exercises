/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgargant <dgargant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 12:40:59 by dgargant          #+#    #+#             */
/*   Updated: 2025/07/28 12:22:41 by dgargant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef	PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
#include "Contact.hpp"

# define N_CON 8
# define RED "\001\033[0;31m\002"
# define GREEN "\001\033[0;32m\002"
# define PURPLE "\001\033[0;95m\002"
# define RESET "\001\033[0m\002"

class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
		void InitMenu();
		void AddContact();

	private:
		Contact contacts[N_CON];
};

#endif

