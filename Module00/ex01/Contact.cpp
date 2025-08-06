/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgargant <dgargant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 10:05:22 by dgargant          #+#    #+#             */
/*   Updated: 2025/08/06 14:41:02 by dgargant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	//std::cout << "Contact Constructor called" << std::endl;
	//Contact *contact = new Contact;
	return ;
}

/*Contact::Contact(std::string name, std::string lastname, std::string nickname,
			int phoneNum, std::string secret){
	std::cout << "Contact Constructor called" << std::endl;
	Contact *contact = new Contact(name, lastname, nickname, phoneNum, secret);
}*/

Contact::~Contact(){
	//std::cout << "Contact Destructor called" << std::endl;
	return ;
}

std::string	Contact::getName() const
{
	return(this->name);
}

void	Contact::setName(std::string name)
{
	this->name = name;
}

std::string	Contact::getLastName() const
{
	return(this->lastname);
}

void	Contact::setLastName(std::string lastname)
{
	this->lastname = lastname;
}

std::string	Contact::getNickName() const
{
	return(this->nickname);
}

void	Contact::setNickName(std::string nickname)
{
	this->nickname = nickname;
}

std::string	Contact::getSecret() const
{
	return(this->secret);
}

void	Contact::setSecret(std::string secret)
{
	this->secret = secret;
}

std::string	Contact::getPhoneNum() const
{
	return(this->phoneNum);
}

void	Contact::setPhoneNum(std::string phoneNum)
{
	this->phoneNum = phoneNum;
}



