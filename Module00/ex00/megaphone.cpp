/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgargant <dgargant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 11:01:57 by dgargant          #+#    #+#             */
/*   Updated: 2025/10/28 11:37:29 by dgargant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{	
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{	
		std::string arg;
		for (int i = 1; i < argc; i++)
		{
			arg = argv[i];
			for (size_t j = 0; j < arg.length(); j++)
				std::cout << static_cast<unsigned char>(std::toupper(arg[j]));
		}
		std::cout << std::endl;
	}
}
