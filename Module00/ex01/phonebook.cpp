/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgargant <dgargant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 12:40:44 by dgargant          #+#    #+#             */
/*   Updated: 2025/08/06 14:48:48 by dgargant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook(){
	//std::cout << "PhoneBook Constructor called" << std::endl;
	//PhoneBook *phone = new PhoneBook;
	this->count = 0;
	this->maxCont = false;
	return ;
}

PhoneBook::~PhoneBook(){
	//std::cout << "PhoneBook Destructor called" << std::endl;
	return ;
}

int		PhoneBook::checkLeters(std::string arg)
{
	int j = 0;
	if (arg[0] == '\0')
		return (1);
	for (size_t i = 0; i < arg.length(); i++ )
	{
		if (!isalpha(arg[i]) && arg[i] != ' ')
			return (1);
		if (arg[i] != ' ')
			j++;
	}
	if (j == 0)
		return(1);
	return (0);
}

int		PhoneBook::checkNumbers(std::string arg)
{
	//int j = 0;
	if (arg[0] == '\0')
		return (1);
	for (size_t i = 0; i < arg.length(); i++ )
	{
		if (!isdigit(arg[i]))
			return (1);
	}
	return (0);
}

void	PhoneBook::AddContact()
{
	std::string buff;
	if (this->count <= N_CON && this->maxCont == false)
		this->contacts[this->count++] = Contact();
	while (true)
	{	
		std::cout << GREEN "Write the name contact" RESET<< std::endl;
		std::getline(std::cin, buff);
		if (checkLeters(buff))
			std::cout << RED "Invalid character or empty field" RESET<< std::endl;
		else
		{
			this->contacts[this->count].setName(buff);
			break;
		}
	}
	while (true)
	{	
		std::cout << GREEN "Write the last name contact" RESET<< std::endl;
		std::getline(std::cin, buff);
		if (checkLeters(buff))
			std::cout << RED "Invalid character or empty field" RESET<< std::endl;
		else
		{
			this->contacts[this->count].setLastName(buff);
			break;
		}
	}
	while (true)
	{	
		std::cout << GREEN "Write the nickname contact" RESET<< std::endl;
		std::getline(std::cin, buff);
		if (buff[0] == '\0')
			std::cout << RED "Empty field" RESET<< std::endl;
		else
		{
			this->contacts[this->count].setNickName(buff);
			break;
		}
	}
	while (true)
	{	
		std::cout << GREEN "Write the phonenumber contact" RESET<< std::endl;
		std::getline(std::cin, buff);
		if (checkNumbers(buff))
			std::cout << RED "Invalid or empty field" RESET<< std::endl;
		else
		{
			this->contacts[this->count].setPhoneNum(buff);
			break;
		}
	}
	while (true)
	{	
		std::cout << GREEN "Write a dark secret" RESET<< std::endl;
		std::getline(std::cin, buff);
		if (checkLeters(buff) || checkNumbers(buff))
			std::cout << RED "Invalid character or empty field" RESET<< std::endl;
		else
		{
			this->contacts[this->count].setSecret(buff);
			break;
		}
	}
	this->count++;
	if (this->count == 8)
	{
		this->maxCont = true;
		this->count = 0;
	}
}

void	PhoneBook::SearchContact()
{
	for (int i = 0; i <= this->count; i++)
	{
		std::cout << std::setw(10) << std::right << this->contacts[this->count].getName() << std::endl;
	}
}

void	PhoneBook::InitMenu(){
	//int i;
	std::string buff;
	std::string str;
	std::cout << "Write the following comands:" << std::endl;
	while (true)
	{
		std::cout << " --> ADD\n --> SEARCH\n --> EXIT" << std::endl;
		std::getline(std::cin, buff);
		for (size_t i = 0; i < buff.length(); i++)
			str[i] = std::toupper(buff[i]);
		if (str.compare("ADD") == 0)
			PhoneBook::AddContact();
		else if (str.compare("SEARCH") == 0)
		{
			SearchContact();
		}
		else if (str.compare("EXIT") == 0)
			break;
		else
			std::cout << "Please enter a valid command" << std::endl;
	}
}