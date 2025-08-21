/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgargant <dgargant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 12:17:29 by dgargant          #+#    #+#             */
/*   Updated: 2025/08/21 12:29:33 by dgargant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


int main()
{
	std::string brain = "HI THIS IS BRAIN";

	std::string *stringPTR = &brain;
	
	std::string &stringREF = brain;

	std::cout << &brain << std::endl;

	std::cout << stringPTR << std::endl;

	std::cout << &stringREF << std::endl;

	std::cout << brain << std::endl;

	std::cout << *stringPTR << std::endl;

	std::cout << stringREF << std::endl;
}