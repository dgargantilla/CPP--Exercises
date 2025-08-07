/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgargant <dgargant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 12:40:59 by dgargant          #+#    #+#             */
/*   Updated: 2025/08/07 12:28:05 by dgargant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef	PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
#include "Contact.hpp"
#include <iomanip>
#include <limits>

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

	private:
		Contact contacts[N_CON];
		int		count;
		bool	maxCont;
		void AddContact();
		void SearchContact();
		int	checkLeters(std::string arg);
		int	checkNumbers(std::string arg);
};

#endif

