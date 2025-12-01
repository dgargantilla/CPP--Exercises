/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgargantilla <dgargantilla@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 12:17:31 by dgargant          #+#    #+#             */
/*   Updated: 2025/11/28 12:22:13 by dgargantill      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replacer.hpp"

int checkArgs(int argc, char const **argv)
{
    if (argc != 4 || !argv[2] || !argv[3])
    {
        std::cerr << RED << "Incorrect number of arguments or empty arguments" << RESET << std::endl;
        return (1);
    }
    return (0);
}


int main(int argc, char const **argv)
{
    if (checkArgs(argc, argv))
        return (-1);
    Replacer Replace(argv[1], argv[2], argv[3]);
    Replace.makeOutfile();
    return (0);
}