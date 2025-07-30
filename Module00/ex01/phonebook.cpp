/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgargant <dgargant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 12:40:44 by dgargant          #+#    #+#             */
/*   Updated: 2025/07/30 12:45:44 by dgargant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook(){
	std::cout << "PhoneBook Constructor called" << std::endl;
	PhoneBook *phone = new PhoneBook;
}

PhoneBook::~PhoneBook(){
	std::cout << "PhoneBook Destructor called" << std::endl;
}

void	PhoneBook::AddContact()
{
	std::string buff;
	if (!this->contacts)
		this->contacts[0] = Contact(); 
	std::cout << "Write the name contact"<< std::endl;
	std::getline(std::cin, buff);
	
}

void	PhoneBook::InitMenu(){
	int i;
	std::string buff;
	std::string str;
	std::cout << "Write the following comands:" << std::endl;
	while (1)
	{
		std::cout << " --> ADD\n --> SEARCH\n --> EXIT" << std::endl;
		std::getline(std::cin, buff);
		for (size_t j = 0; j < buff.length(); j++)
			str[i] = std::toupper(buff[i]);
		if (str.compare("ADD") == 0)
			PhoneBook::AddContact();
		else if (str.compare("SEARCH") == 0)
		{
			
		}
		else if (str.compare("EXIT") == 0)
			break;
		else
			std::cout << "Please enter a valid command" << std::endl;
	}
}