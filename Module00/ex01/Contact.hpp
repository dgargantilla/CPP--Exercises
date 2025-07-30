/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgargant <dgargant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 10:06:14 by dgargant          #+#    #+#             */
/*   Updated: 2025/07/30 12:03:57 by dgargant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef	CONTACT_H
# define CONTACT_H

#include <iostream>

class Contact
{
	public:
		Contact();
		Contact(std::string name, std::string lastname, std::string nickname,
			int phoneNum, std::string secret);
		~Contact();
		std::string 	getName() const;
		void			setName(std::string name);
		std::string 	getLastName() const;
		void			setLastName(std::string lastname);
		std::string 	getNickName() const;
		void			setNickName(std::string nickname);
		std::string 	getSecret() const;
		void			setSecret(std::string secret);
		int				getPhoneNum() const;
		void			setPhoneNum(int phoneNum);
	
	private:
		std::string name;
		std::string lastname;
		std::string nickname;
		std::string	secret;
		int			phoneNum;
};

#endif
